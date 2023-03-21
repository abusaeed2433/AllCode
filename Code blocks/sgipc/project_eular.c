#include<stdio.h>
int main()
{
   int t,i;
   long long int n;
   scanf("%d",&t);
   for(i=0;i<t;i++)
   {
        scanf("%lld",&n);
        long long int c,x;
        for(c=2;n!=0;)
        {
            if(n%c==0)
            {
                x=n;
                n=n/c;
                if(n==1)
                {
                    printf("%lld",x);
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
   return 0;
}
