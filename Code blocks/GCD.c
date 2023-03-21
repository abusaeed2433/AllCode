#include<stdio.h>
int main()
{
    int a,b,x,i,gcd;
    printf("Enter your two number:\n");
    scanf("%d%d",&a,&b);
    if(a>b)
        {
            for(i=b;i>0;i--)
            {
                if(a%i==0&&b%i==0)
                {
                    gcd=i;
                    break;
                }
                else
                {
                    continue;
                }
            }
        }
        else
        {
            for(i=a;i>0;i--)
            {
                if(a%i==0&&b%i==0)
                {
                    gcd=i;
                    break;
                }
                else
                {
                    continue;
                }
            }
        }
        printf("%d",gcd);
    return 0;
}
