#include<stdio.h>
int main()
{
    int a[100000],c[100],num=0,count=0,k;
    int j,i,n,b,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        for(i=0;i<n;i++)
        {
            for(j=(i+1);j<n;j++)
            {
                if(a[i]=a[j])
                {
                    count++;
                }
                else
                {
                    num++;
                }
            }

        }
        for(k=0;k<=i;k++)
        {
            c[k]=n-count;
        }
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",c[i]);
    }
}
