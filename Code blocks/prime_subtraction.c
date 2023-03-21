#include<stdio.h>
int main()
{
    long long int t,i,j,k,n,m;
    scanf("%lld",&t);
    int x[t];
    for(i=0;i<t;i++)
    {
        scanf("%lld%lld",&n,&m);
        if((n-m)==1)
        {
            x[i]=0;
        }
        else
        {
            x[i]=1;
        }
    }
    for(i=0;i<t;i++)
    {
        if(x[i]==0)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
    return 0;
}
