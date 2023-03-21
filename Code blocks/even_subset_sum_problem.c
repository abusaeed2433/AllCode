#include<stdio.h>
int main()
{
    int t,n,a[101],d[101],y[101],i,j,x[101];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        for(j=1;j<=n;j++)
        {
            scanf("%d",&a[j]);
        }
        x[i]=0;
        for(j=1;j<=n;j++)
        {
            if(a[j]%2==0)
            {
                x[i]=1;
                y[i]=j;
                break;
            }
        }
        if(x[i]!=1)
        {
            if(n==1)
            {
                d[i]=-1;
            }
            else
            {
                d[i]=2;
            }
        }
    }
    for(i=1;i<=t;i++)
    {
        if(x[i]==1)
        {
            printf("1\n%d\n",y[i]);
        }
        else if(d[i]==-1)
        {
            printf("-1\n");
        }
        else if(d[i]==2)
        {
            printf("2\n1 2\n");
        }
    }
    return 0;
}
