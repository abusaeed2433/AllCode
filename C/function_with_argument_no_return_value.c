#include<stdio.h>

void justAdd(int,float);

int main(){
    int a;
    float b;
    scanf("%d%f",&a,&b);
    justAdd(a,b);
    return 0;
}

void justAdd(int a,float b){
    printf("sum is %f\n",a+b);
}
