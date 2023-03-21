#include<stdio.h>
int main()
{
    int t,n[1000],i,x=0,y=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<(t/2);i++)
    {
        if(n[i]>=n[t-1-i])
        {
            x=x+n[i];
            y=y+n[t-1-i];
        }
        else
        {
            y=y+n[i];
            x=x+n[t-i-1];
        }
    }
    if(t%2==0)
    {
        printf("%d %d",x,y);
    }
    else
    {
        printf("%d %d",(x+n[t/2]),y);
    }

}
