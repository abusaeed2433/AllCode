#include<stdio.h>
#include<string.h>
int main()
{
    struct person
    {
        char name[51];
        int age;
    };
    struct person p1;
//    person p1;
    scanf("%s",p1.name);
    scanf("%d",&p1.age);
    FILE *ptr = fopen("sample2.txt","a");
    fwrite(&p1,sizeof(p1),1,ptr);
    fclose(ptr);
    printf("File closed successfully\n");
    FILE *ptr2 = fopen("sample2.txt","r");
    struct person p2;
    while(fread(&p2,sizeof(p2),1,ptr2)!=NULL){
        puts(p2.name);
        printf("%d\n",p2.age);
    }
    return 0;
}
