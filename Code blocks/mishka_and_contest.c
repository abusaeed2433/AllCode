#include<stdio.h>
int main()
{
    int n,k,i,j,x=0,z=0;
    scanf("%d%d",&n,&k);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<=k)
        {
            x++;
        }
        else
        {
            break;
        }
    }
    for(i=(n-1);i>=0;i--)
    {
        if(a[i]<=k)
        {
            z++;
        }
        else
        {
            break;
        }
    }
    if(x<n)
    {
        printf("%d",x+z);
    }
    else
    {
        printf("%d",x);
    }
    return 0;
}
