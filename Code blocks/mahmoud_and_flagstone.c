#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n+1];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]<a[j+1])
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
    long long x=1,y=1,z=0;
    for(i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1])
        {
            x++;
            if(i==(n-2))
            {
                if(x==1)
                {
                    z+=1;
                }
                else
                {
                    for(j=0;j<x;j++)
                    {
                        y=y*2;
                    }
                    z+=y-1;
                    x=1;
                }
            }
        }
        else
        {
            if(x==1)
            {
                z+=1;
            }
            else
            {
                for(j=0;j<x;j++)
                {
                    y=y*2;
                }
                z+=y-(x+1);
                x=1;
            }
        }
    }
    printf("%lld",z);
}