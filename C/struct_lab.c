#include<stdio.h>
struct student{
        char name[51];
        int roll;
        double marks[3];
        double total_marks;
    }stud[5];
int main(){

    void showDetails();
    double findSum(double[]);
    for(int i=0;i<5;i++){
        printf("Enter Roll of student %d = ",i+1);
        scanf("%d",&stud[i].roll);
        printf("Enter Name of student %d = ",i+1);
        scanf("%s",stud[i].name);
        stud[i].total_marks=0;
        for(int j=0;j<3;j++){
            printf("Enter marks of of subject - %d of student %d = ",j+1,i+1);
            scanf("%lf",&stud[i].marks[j]);
            //stud[i].total_marks+=stud[i].marks[j];
        }
        stud[i].total_marks = findSum(stud[i].marks);
    }
    showDetails();
    return 0;
}
double findSum(double arr[]){
    double temp=0;
    for(int i=0;i<3;i++){
        temp+=arr[i];
    }
    return temp;
}

void showDetails(){
    char n[5] = "Name",r[5]="Roll",t[12]="Total";
    printf("%*s%*s%*s\n",10,r,10,n,10,t);
    for(int i=0;i<5;i++){
        printf("%*d%*s%*.2lf\n",10,stud[i].roll,10,stud[i].name,10,stud[i].total_marks);
    }
}
