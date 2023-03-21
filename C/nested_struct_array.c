#include<stdio.h>
#include<string.h>

int main(){

    struct books{
        char b1[101],b2[101];
    };

    struct person{
        char name[101];
        int roll;
        struct books books;
    };



    int n;
    printf("Enter total person = ");
    scanf("%d",&n);

    char values[4][101]={"Enter Name of student-","Enter roll of student-","Enter books 1 of student-","Enter book 2 of student-"};

    struct person arr[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            char temp[101];
            strcpy(temp,values[j]);
            char temp2[5];
            sprintf(temp2,"%d = ",i+1);
            strcat(temp,temp2);
            printf("%s",temp);
            if(j<2){
                j==0 ? scanf("%s",arr[i].name) : scanf("%d",&arr[i].roll);
            }
            else{
                j == 2 ?scanf("%s",arr[i].books.b1) : scanf("%s",arr[i].books.b2);
            }
        }
        printf("\n");
    }
    printf("Name\tRoll\tBooks\n");
    for(int i=0;i<n;i++){
        printf("%s\t%d\t%s\t%s\n",arr[i].name,arr[i].roll,arr[i].books.b1,arr[i].books.b2);
    }

    return 0;
}
