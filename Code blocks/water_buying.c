#include<stdio.h>
int main()
{
    long long int n,a,b,i,x[500];
    int t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld%lld%lld",&n,&a,&b);
        if((2*a)<=b)
        {
            x[i]=n*a;
        }
        else
        {
            if(n%2==0)
            {
                x[i]=(n/2)*b;
            }
            else
            {
                x[i]=a+(n/2)*b;
            }
        }
    }
    for(i=0;i<t;i++)
    {
        printf("%lld\n",x[i]);
    }
    return 0;
}
