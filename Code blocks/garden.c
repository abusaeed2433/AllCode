#include<stdio.h>
int main()
{
    int n,k,i,j;
    scanf("%d%d",&n,&k);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
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
    for(i=0;i<n;i++)
    {
        if(k%a[i]==0)
        {
            printf("%d",(k/a[i]));
            break;
        }
        else
        {
            continue;
        }
    }
}
