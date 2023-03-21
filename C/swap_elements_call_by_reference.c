#include<stdio.h>

void swapNumber(int *a,int *b);
int main(){
    int a,b;
    printf("Number 1 = ");
    scanf("%d",&a);
    printf("Number 2 = ");
    scanf("%d",&b);
    swapNumber(&a,&b);
    printf("%d %d\n",a,b);
    return 0;
}

void swapNumber(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
