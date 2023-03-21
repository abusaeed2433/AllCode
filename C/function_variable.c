#include<stdio.h>

void show(int);
int main(){
    int a;
    scanf("%d",&a);
    show(a);
    return 0;
}

void show(int b){
    b=60;
    printf("%d\n",b);
}
