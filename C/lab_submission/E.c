//                  CONTEST E
#include<stdio.h>
int GCD(int a,int b)
{
    int gcd=1;
    for(int i=1; i <= a && i<=b;i++)
    {
        if(a%i==0&&b%i==0)
            gcd = i;
    }
    return gcd;
}

int main()
{

    while(1)
    {
        int n;
        scanf("%d",&n);
        if(n==0) break;
        else
        {
            long long int G=0;
            for(int i=1; i<n; i++)
            {
                for(int j=i+1; j<=n; j++)
                {
                    G+=GCD(i,j);
                }
            }

            printf("%lld\n",G);
        }
    }
    return 0;
}
