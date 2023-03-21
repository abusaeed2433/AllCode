#include<stdio.h>
int main(){
    int n,sb;
    printf("Enter total number of student: ");
    scanf("%d",&n);
    printf("Enter number of subject: ");
    scanf("%d",&sb);
    int std[n][sb];
    for(int i=0;i<n;i++){
        printf("\tMarks for student %d\n",i+1);
        for(int j=0;j<sb;j++){
            printf("Enter marks of subject %d: ",j+1);
            scanf("%d",&std[i][j]);
        }
    }
    int sum[n];
    for(int i=0;i<n;i++){
        int s = 0;
        for(int j=0;j<sb;j++){
            s+=std[i][j];
        }
        sum[i]=s;
    }
    printf("\n");
    for(int i=0;i<n;i++){
        if(sum[i]>=80){
            printf("Grade of student %d is A+. Total marks = %d\n",i+1,sum[i]);
        }
        else{
            printf("Grade of student %d is A-. Total marks = %d\n",i+1,sum[i]);
        }
    }
    return 0;
}
