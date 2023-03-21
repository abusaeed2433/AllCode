#include<stdio.h>

int main(){
    int a=39;
    double b=5.26;
    b = (int)(b + a++);
    printf("%lf",b);
    return 0;
}
