#include<stdio.h>
int main()
{
    int t,n,i,j,k;
    scanf("%d",&t);
    int x[t];
    for(i=0;i<t;i++)
    {
        x[i]=0;
        scanf("%d",&n);
        int a[n];
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                if(abs(a[j]-a[k])==1)
                {
                    x[i]=1;
                    break;
                }
                else
                {
                    continue;
                }
            }
            if(x[i]==1)
            {
                break;
            }
        }
    }
    for(i=0;i<t;i++)
    {
        if(x[i]==1)
        {
            printf("2\n");
        }
        else
        {
            printf("1\n");
        }
    }
}
