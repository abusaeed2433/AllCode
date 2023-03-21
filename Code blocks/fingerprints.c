#include<stdio.h>
int main()
{
    int a[10],b[10],c,d[10],t,n,i,j;
    scanf("%d%d",&t,&n);
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<t;i++)
    {
        d[i]=-1;
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                d[i]=b[j];
                break;
            }
            else
            {
                continue;
            }
        }
    }
    for(i=0;i<t;i++)
    {
        if(d[i]>=0)
        {
        printf("%d ",d[i]);
        }
        else
        {
            continue;
        }
    }
    return 0;
}
