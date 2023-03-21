#include<stdio.h>
int main()
{
    int t,i;
    long long int n,pf;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);
        int c=2;
        while(n!=0)
        {
            if(n%c==0)
            {
                pf=n;
                n=n/c;
                if(n==1)
                {
                    printf("%lld",pf);
                    break;
                }
                else
                {
                    continue;
                }
            }
            else
            {
                c=c+1;
            }
        }
    }
}
