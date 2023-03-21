#include<stdio.h>
int main()
{
    int t,n[1000],d,b,i,j;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<t;i++)
    {
        for(j=0;j<(t-1);j++)
        {
            if(n[j]<=n[j+1])
            {
                continue;
            }
            else
            {
                b=n[j];
                n[j]=n[j+1];
                n[j+1]=b;
            }
        }
    }
    if(t%2==0)
    {
        printf("%d",n[(t/2)-1]);
    }
    else
    {
        printf("%d",n[t/2]);
    }
    return 0;
}
