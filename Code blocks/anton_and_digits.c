#include<stdio.h>
int main()
{
    int a,b,c,d,i,sum;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a<=c&&a<=d)
    {
        sum=256*a;
    }
    else if(c<=a&&c<=d)
    {
        sum=256*c;
        a=a-c;
        if(a<=b)
        {
            sum=sum+(32*a);
        }
        else
        {
            sum=sum+(32*b);
        }
    }
    else if(d<=a&&d<=c)
    {
        sum=256*d;
        a=a-d;
        if(a<=b)
        {
            sum=sum+32*a;
        }
        else
        {
            sum=sum+32*b;
        }
    }
    printf("%d",sum);
}
