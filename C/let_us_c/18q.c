#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    char *name;
    char *doj;
};

int main(){

    typedef struct employee EMP;

    printf("size = %d",sizeof(int));

    EMP arr[] = {
        {100,"aabu","01/01/2015"},
        {100,"babu","29/12/2018"},
        {100,"cabu","1/1/2015"}
    };
    //11/11/2018 - 12/12/2015

    char date[12];
    printf("Enter date: ");
    scanf("%s",date);

    int n=3;
    int d,m,y;
    sscanf(date,"%d/%d/%d",&d,&m,&y);
    for(int i=0;i<n;i++){
        int d1,m1,y1;
        sscanf(arr[i].doj,"%d/%d/%d",&d1,&m1,&y1);
        if(y-y1>3){
            printf("%s\t",arr[i].name);
        }
        else if(y-y1==3 && (m>m1 || (m==m1 && d>=d1))){
                printf("%s\t",arr[i].name);
        }
    }
    return 0;
}
