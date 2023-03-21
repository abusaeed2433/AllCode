#include<stdio.h>
int main()
{
    long long int t,s,a,b,e,c,i;
    scanf("%lld",&t);
    long long int d[t];
    for(i=0;i<t;i++)
    {
        scanf("%lld%lld%lld%lld",&s,&a,&b,&c);
        e=s/c;
        if((e/a)>=1)
        {
            d[i]=(s/c)+(b*(int)(e/a));
        }
        else
        {
            d[i]=(s/c);
        }
    }
    for(i=0;i<t;i++)
    {
        printf("%lld\n",d[i]);
    }
    return 0;
}
