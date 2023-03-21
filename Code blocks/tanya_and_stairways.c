#include<stdio.h>
int main()
{
    int n,i,j,b=0,a[1000],c[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n;i++)
    {
        c[i]=1;
    }
    for(j=0;j<n;j++)
    {
        if(a[j]==1)
        {
            b++;
        }
        else
        {
            c[b]++;
        }
    }
    printf("%d\n",b);
    for(i=1;i<=b;i++)
    {
        printf("%d ",c[i]);
    }
}
