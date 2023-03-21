#include<stdio.h>
int main()
{
    int t,i,j,k,b,n;
    scanf("%d",&t);
    int d[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        int a[n],x=0;
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        for(j=n;j>0;j--)
        {
            x=0;
            for(k=0;k<n;k++)
            {
                if(a[k]>=j)
                {
                    x++;
                }
                else
                {
                    continue;
                }
            }
            if(x>=j)
            {
                d[i]=j;
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
        printf("%d\n",d[i]);
    }
    return 0;
}
