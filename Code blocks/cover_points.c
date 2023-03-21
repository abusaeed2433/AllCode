#include<stdio.h>
int main()
{
    long long int n,a,b,i,d,c=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld%lld",&a,&b);
        d=a+b;
        if(c>=d)
        {
            continue;
        }
        else
        {
            c=d;
        }
    }
    printf("%lld",c);
    return 0;
}
