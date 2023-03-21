#include<stdio.h>

void swapNumber(int,int,int*);

int main(){
    int a,b,arr[2];
    scanf("%d%d",&a,&b);
    swapNumber(a,b,arr);
    a=arr[0];
    b=arr[1];
    printf("%d %d\n",a,b);
    return 0;
}

void swapNumber(int a,int b,int *pt){
    *pt = b;
    *(pt+1) = a;
}
