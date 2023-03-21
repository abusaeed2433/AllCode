#include<stdio.h>
#include "adder.c"

int sum;

int main(){

    int a,b;
    printf("Sum = %d.\nEnter two number : ",sum);
    scanf("%d%d",&a,&b);
    add(a,b);
    printf("Sum is = %d",sum);
    return 0;
}
