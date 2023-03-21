#include<stdio.h>
int main()
{
    int n,t,d[50],i,j,k;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=(n-1);i>=0;i--)
    {
        for(j=(n-1);j>=0;j--)
        {
            if(j!=i&&a[i]==a[j])
            {
                a[j]=0;
            }
            else
            {
                continue;
            }
        }
    }
    int x=0;
    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            x++;
        }
    }
    printf("%d\n",x);
    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            printf("%d ",a[i]);
        }
        else
        {
            continue;
        }
    }
}
