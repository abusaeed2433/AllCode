#include<stdio.h>
int main()
{
    long long int a,b,x,c,d,e,f,m,i,gcd,lcm;
    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
    e=(int)c;
    f=(int)d;
    if(e>=f)
    {
        m=f;
    }
    else
    {
        m=e;
    }
    while(e!=0&&f!=0)
    {
        gcd=f;
        f=e%f;
        e=gcd;
    }
    lcm=(c*d)/gcd;
    x=b/c+b/d-b/lcm-(a-1)/c-(a-1)/d+(a-1)/lcm;
    printf("%lld",(b-a+1-x));
}
