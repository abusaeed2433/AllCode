#include<stdio.h>
int main()
{
    long long int i,j,x=0,a,d[20],z=0;
    scanf("%lld",&a);
    for(i=0;i<19;i++)
    {
        if(a!=0)
        {
            d[i]=a%10;
            a=a/10;
            x++;
        }
        else
        {
            break;
        }
    }
    for(i=0;i<x;i++)
    {
        if(d[i]==4||d[i]==7)
        {
            z++;
        }
        else
        {
            continue;
        }
    }
    if(z==4||z==7)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}