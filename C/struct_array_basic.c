#include<stdio.h>

int main(){
    int n;
    printf("Enter number of students = ");
    scanf("%d",&n);

    struct student{
        char name[51];
        int roll;
        float result;
    };

    struct student arr[n];

    for(int i=0;i<n;i++){
        printf("Enter name = ");
        scanf("%s",arr[i].name);
        printf("Enter roll = ");
        scanf("%d",&arr[i].roll);
        printf("Enter result = ");
        scanf("%f",&arr[i].result);
    }

    printf("Name\tRoll\tResult\n");
    for(int i=0;i<n;i++){
        printf("%s\t%d\t%.2f\n",arr[i].name,arr[i].roll,arr[i].result);
    }

    return 0;
}
