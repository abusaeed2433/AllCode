#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("1st number/2nd number=answer.\n1st number=");
    scanf("%d",&a);
    printf("2nd number=");
    scanf("%d",&b);
    if(a>=b)
    {
    c=a/b;
    d=a-c*b;
    printf("Remainder is=%d",d);
    return 0;
    }
    else
        printf("first number should be greater than 2nd number")
}
