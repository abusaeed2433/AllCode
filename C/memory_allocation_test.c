#include<stdio.h>
#include<stdlib.h>

void case_1();
void case_2();
void case_3();
int main()
{
    int *check = malloc(sizeof(int));
    printf("What do you want to get?\n1.Get sorted array\n2.Get sum on N number\n3.Put and get name\n");
    scanf("%d",check);
    switch(*check)
    {
    case 1:
        case_1();
        free(check);
        break;
    case 2:
        case_2();
        free(check);
        break;
    case 3:
        case_3();
        free(check);
        break;
    default:
        printf("Wrong number inserted. Exiting program.");
        free(check);
        break;
    }
}

void case_1()
{
    int *n = malloc(sizeof(int));
    printf("Get sorted array clicked\nEnter number of elements = ");
    scanf("%d",n);
    int *ptr = calloc(*n,sizeof(int));
    int *i = calloc(1,sizeof(int));
    for(*i=0; *i<*n; *i = *i +1) scanf("%d",ptr+(*i));
    for(*i=0; *i<*n-1; *i = *i+1)
    {
        int *j = malloc(sizeof(int));
        for(*j=*i+1; *j<*n; *j = *j+1)
        {
            if(*(ptr+*i)>*(ptr+*j))
            {
                int *temp = malloc(sizeof(int));
                *temp = *(ptr+*i);
                *(ptr+*i) = *(ptr+*j);
                *(ptr+*j) = *temp;
                free(temp);
            }
        }
        free(j);
    }
    printf("Sorted array is given below:\n");
    for(*i=0;*i<*n;*i =*i+1)printf("%d ",*(ptr+*i));
    printf("\n");
    free(n);
    free(ptr);
    free(i);
}
void case_2()
{
    int n;
    printf("Get sum of N number clicked.\nNumber of number = ");
    scanf("%d",&n);

}

void case_3()
{
    char name[101];
    printf("Put and get name clicked.\nEnter Name = ");
    gets(name);
    puts(name);
}
//will do later. reason: game download successful
