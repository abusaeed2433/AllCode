#include<stdio.h>

int getMaximum(int,int);

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("Maximum is %d",getMaximum(a,b));
    return 0;
}
int getMaximum(int a,int b){
    return a>b? a:b;
}
