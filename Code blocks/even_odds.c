#include<stdio.h>
int main()
{
    long long int a,b,i,j;
    scanf("%lld%lld",&a,&b);
    j=0;
    if(a%2==0)
    {
        for(i=1;i<=a;i+=2)
        {
            if((j+1)==b)
            {
                printf("%lld",i);
                break;
            }
            if((j+1)==(a/2))
                i=0;
            j++;
        }
    }
    else
    {
        for(i=1;i<=a;i+=2)
        {
            if((j+1)==b)
            {
                printf("%lld",i);
                break;
            }
            j++;
            if((j+1)==((a/2)+1))
                i=0;
        }
    }

}
