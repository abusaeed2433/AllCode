#include<stdio.h>
int main()
{
    long long int a,b,c,d[1000];
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld%lld%lld",&a,&b,&c);
        d[i]=(a+b+c)/2;
    }
    for(i=0;i<t;i++)
    {
        printf("%lld\n",d[i]);
    }
    return 0;
}
