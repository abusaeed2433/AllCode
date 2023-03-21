#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter your value=");
    scanf("%d",&a);
    if(a>0)
        printf("Given number is positive");
    else if(a<0)
        printf("Given number is negative");
    else
        printf("Given number is zero");
    return 0;
}
