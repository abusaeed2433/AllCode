#include<stdio.h>
int main()
{
    int n,h,u1,u2,d1,d2,i,j,sum;
    scanf("%d%d%d%d%d%d",&n,&h,&u1,&d1,&u2,&d2);
    sum=n;
    if(d1>d2)
    {
        for(i=d1;i<=h;i++)
        {
            sum+=i;
        }
        if(sum>=u1)
        {
            sum=sum-u1;
        }
        else
        {
            sum=0;
        }
        for(j=d2;j<d1;j++)
        {
            sum+=j;
        }
        if(sum>=u2)
        {
            sum=sum-u2;
        }
        else
        {
            sum=0;
        }
        for(i=0;i<d2;i++)
        {
            sum+=i;
        }
        printf("%d",sum);
    }
    else
    {
        for(i=d2;i<=h;i++)
        {
            sum+=i;
        }
        if(sum>=u2)
        {
            sum=sum-u2;
        }
        else
        {
            sum=0;
        }
        for(j=d1;j<d2;j++)
        {
            sum+=j;
        }
        if(sum>=u1)
        {
            sum=sum-u1;
        }
        else
        {
            sum=0;
        }
        for(i=0;i<d1;i++)
        {
            sum+=i;
        }
        printf("%d",sum);
    }
    return 0;
}
