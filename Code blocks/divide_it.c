#include<stdio.h>
int main()
{
    long long int n,i,j,t,c;
    scanf("%lld",&t);
    long long int x[t];
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);
        long long int y=0;
        for(j=0;j<100;j++)
        {
            if(n==1)
            {
                x[i]=y;
            }
            else
            {
            if(n%2==0)
            {
                n=n/2;
                y++;
            }
            else if(n%3==0)
            {
                n=(2*n)/3;
                y++;
            }
            else if(n%5==0)
            {
                n=(4*n)/5;
                y++;
            }
            else
            {
                x[i]=-1;
                break;
            }
            }
        }
    }
    for(i=0;i<t;i++)
    {
        printf("%lld\n",x[i]);
    }
    return 0;
}
