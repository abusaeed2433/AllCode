#include<stdio.h>
int main()
{
    int t,i,b,n[100],sum1=0,sum=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n[i]);
        sum1=sum1+n[i];
    }
    for(i=0;i<t;i++)
    {
        if(n[i]>=n[i+1])
        {
            continue;
        }
        else
        {
            b=n[i];
            n[i]=n[i+1];
            n[i+1]=b;
        }
    }
    label:
    for(i=0;i<t;i++)
    {
        sum=sum+n[0]-n[i];
    }
    if(sum>sum1)
    {
        printf("%d",n[0]);
    }
    else
    {
        n[0]=n[0]+1;
        goto label;
    }
    return 0;
}
