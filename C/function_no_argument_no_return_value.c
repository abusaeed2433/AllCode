#include<stdio.h>

void takeAndPrint();

int main(){
    takeAndPrint();
    return 0;
}

void takeAndPrint(){
    int a,b;
    scanf("%d%d",&a,&b);
    a>b?printf("a is bigger\n"):printf("b is bigger\n");
}
