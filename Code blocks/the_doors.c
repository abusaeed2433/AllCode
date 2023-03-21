#include<stdio.h>
int main()
{
    int t,n[200000],i,j,x;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n[i]);
    }
    if(n[t-1]==0)
    {
        for(j=(t-1);j>=0;j--)
        {
            if(n[j]==1)
            {
                x=j;
                break;
            }
            else
            {
                continue;
            }
        }
    }
    else if(n[t-1]==1)
    {
        for(j=(t-1);j>=0;j--)
        {
            if(n[j]==0)
            {
                x=j;
                break;
            }
            else
            {
                continue;
            }
        }
    }
    printf("%d",x+1);
    return 0;
}
