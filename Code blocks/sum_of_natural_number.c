#include<stdio.h>
int main()
{
    int  n,sum;
    printf("Ideal format:\n1+2+3+4+....+n\nn=");
    scanf("%d",&n);
    sum=(n*(n+1))/2;
    printf("1+2+3+...+%d=%d",n,sum);
    return 0;
}
