#include<stdio.h>
int main()
{
    long long int t,n,i,j,d[1001];
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        d[i]=1;
        scanf("%lld",&n);
        for(j=1;j<=n;j++)
        {
            d[i]=d[i]*j;
        }
    }
    for(i=0;i<t;i++)
    {
        printf("%lld\n",d[i]);
    }
    return 0;
}
