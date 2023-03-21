#include<stdio.h>

int *changeValue(int,int);

int main()
{
    int a=10,b=15;
    int *arr;

    arr = changeValue(a,b);
    a= arr[0];
    b = arr[1];
    printf("%d %d\n",a,b);

    return 0;
}

int *changeValue(int a,int b){
    int *ptr;
    *ptr = a+5;
    *(ptr+1)= b+5;
    return ptr;
}
