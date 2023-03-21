#include<stdio.h>
int main()
{
    long long int n,x,c,i,z=0,sum;
    char ch;
    scanf("%lld%lld",&n,&x);
    sum=x;
    for(i=0;i<n;i++)
    {
        scanf(" %c%lld",&ch,&c);
        if(ch=='+')
        {
            sum=sum+c;
        }
        else
        {
            if(sum>=c)
            {
                sum=sum-c;
            }
            else
            {
                z++;
            }
        }
    }
    printf("%lld %lld",sum,z);
    return 0;
}
