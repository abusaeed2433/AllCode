#include<stdio.h>
int main()
{
    int t,n,c,a,sum[2000],i,x,z[2000],j,y,zz[2000];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        c=0;
        x=0;
        y=0;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a);
            c=c+a;
            if(a%2==1)
            {
                x++;
            }
            else
            {
                y++;
            }
        }
        sum[i]=c;
        z[i]=x;
        zz[i]=y;
    }
    for(i=0;i<t;i++)
    {
        if(sum[i]%2==0)
        {
            if(zz[i]==0)
            {
                printf("NO\n");
            }
            else if(z[i]==0)
            {
                printf("NO\n");
            }
            else
            {
                printf("YES\n");
            }
        }
        else
        {
            printf("YES\n");
        }
    }
    return 0;
}