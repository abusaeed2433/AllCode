#include<stdio.h>
int main()
{
    int n,i,j,x=1;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<(n-1);j++)
        {
            if(a[j]>=a[j+1])
            {
                continue;
            }
            else
            {
                int p=a[j];
                a[j]=a[j+1];
                a[j+1]=p;
            }
        }
    }
    for(i=0;i<(n-1);i++)
    {
        if(a[i]!=0&&a[i]!=a[i+1]&&a[i+1]!=0)
        {
            x++;
        }
        else
        {
            continue;
        }
    }
    printf("%d",x);
    return 0;
}
