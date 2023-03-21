#include<stdio.h>
#include<stdlib.h>


struct student{
    char name[21];
    int age;
};
int main(){
    typedef struct student RECORD;
    int n;
    printf("Enter number of student =");
    scanf("%d",&n);
    RECORD *ptr;
    ptr = (RECORD*)calloc(n,sizeof(RECORD));
    for(int i=0;i<n;i++){
        printf("Enter name = ");
        scanf("%s",(ptr+i)->name);
        printf("Enter age = ");
        scanf("%d",&(ptr+i)->age);
    }

    for(int i=0;i<n;i++){
        printf("Name: %s\tAge: %d\n",(ptr+i)->name,(ptr+i)->age);
    }
    return 0;
}
