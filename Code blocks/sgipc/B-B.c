#include<stdio.h>
int main()
{
    long long int t,i,j,k,c;
    scanf("%lld",&t);
    long long int n,d[t],e[t];
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);
        d[i]=0;
        e[i]=0;
        for(j=2;j<n;j=j+2)
        {
            if(n%2==0)
            {
            c=n/j;
            if(c%2==1)
            {
                d[i]=n/j;
                e[i]=j;
                break;
            }
            else
            {
                continue;
            }
            }
            else
            {
                continue;
            }
        }
    }
    for(i=0;i<t;i++)
    {
        if(d[i]==0)
        {
            printf("Case %lld: Impossible\n",i+1);
        }
        else
        {
            printf("Case %lld: %lld %lld\n",(i+1),d[i],e[i]);
        }
    }
}
