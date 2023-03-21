#include<stdio.h>
main()
{
    long long int m,n,a,d,x,y;
    scanf("%lld %lld %lld",&m,&n,&a);
    if((m%a)==0)
        x=(m/a);
    else if((m%a)!=0)
        x=(m/a)+1;
    if((n%a)==0)
        y=(n/a);
    else if((n%a)!=0)
        y=(n/a)+1;
    d=x*y;
    printf("%lld",d);
return 0;
}
