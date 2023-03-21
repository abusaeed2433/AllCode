#include<stdio.h>
#include<math.h>
int main()
{
    int t,i;
    long long int n,pf,j;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);
        while(n!=0)
        {
            if(n%2==0)
            {
                n=n/2;
            }
            else
            {
                for(j=n;j>2;j=j-2)
                {
                    int z=0,k;
                    for(k=3;k<=sqrt(j);k+=2)
                    {
                        if(j%k==0)
                        {
                            z=1;
                            break;
                        }
                        else
                        {
                            continue;
                        }
                    }
                    if(z==0)
                    {
                        printf("%lld",j);
                        n=0;
                        break;
                    }
                    else
                    {
                        continue;
                    }
                }
            }
        }
    }
    return 0;
}
