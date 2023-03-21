#include<stdio.h>
#include<string.h>
typedef struct{
    char name[50];
    int age;
}record;

void write(record p){
    FILE *ptr;
    ptr = fopen("sample2.txt","w+");
    fprintf(ptr,"%s\n",p.name);
    fprintf(ptr,"%d\n",p.age);
    fclose(ptr);
}
int main(){
    FILE *ptr;
    ptr = fopen("sample2.txt","a+");
    if(ptr==NULL){
        return 0;
    }
    else{
        fclose(ptr);
        record person;
        char name[101];
        scanf("%[^\n]",name);
        puts(name);
        scanf("%s %d",person.name,&person.age);
        write(person);
        FILE *ptr = fopen("sample2.txt","r");
        char data[100];
        while(fgets(data,101,ptr)){
            puts(data);
        }
        fclose(ptr);

    }
    return 0;

}
