#include<stdio.h>
int main()
{
    int a,b,t,c,d;
    scanf("%d%d",&a,&b);
    if(a==b)
    {
        t=0;
    }
    else
    {
        if(a>b)
        {
            c=a-b;
        }
        else
        {
            c=b-a;
        }
        if(c%2==0)
        {
            d=c/2;
            t=d*(d+1);
        }
        else
        {
            d=(c/2);
            t=((d*(d+1))+((d+1)*(d+2)))/2;
        }
    }
    printf("%d",t);
}
