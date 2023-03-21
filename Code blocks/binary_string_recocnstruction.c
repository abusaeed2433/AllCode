#include<stdio.h>
int printer(char s[3],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%s",s);
    }
}
int main(){
    int t,i,n0,n1,n2,n;
    char s[3];
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d%d%d",&n0,&n1,&n2);
        if(n2==0){
            if(n1%2==0){
                printf("0");
                n=(int)(n1/2);
            }
            else{
                n=(int)((n1+1)/2);
            }
            printer("10",n);
            printer("0",n0);
        }
        else if(n0==0){
            if(n1%2==1){
                n=(int)((n1+1)/2);
            }
            else{
                n=(int)(n1/2);
                printf("1");
            }
            printer("01",n);
            printer("1",n2);
        }
        else{
            printer("0",n0);
            if(n1%2==0){
                printer("01",(int)(n1/2));
                printer("1",n2);
                printf("0");
            }
            else{
                printer("01",(int)((n1+1)/2));
                printer("1",n2);
            }
        }
        printf("\n");
    }
}
