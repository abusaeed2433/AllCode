#include<stdlib.h>
#include<stdio.h>

int *findMax(int* a,int* b){
    int max;
    if(*a>*b) max=*a;
    else max=*b;
    return &max;
}
int *fun(){
    int k=20;
    return &k;
}

int main(){
    int *j;
    j = fun();
    printf("%d",*j);
}
