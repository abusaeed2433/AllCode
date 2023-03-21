#include<stdio.h>
int main()
{
    int a,b,n,m;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        n=b;
        m=(a-n)/2;
    }
    else
    {
        n=a;
        m=(b-n)/2;
    }
    printf("%d %d",n,m);
}
