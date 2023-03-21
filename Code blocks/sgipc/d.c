#include<stdio.h>
int main()
{
    double n,c,d=1,i;
    scanf("%lf",&n);
    for(i=1;i<=2000000000;i=i*10)
    {
        c=10*i;
        if((n/c)>=1)
        {
            d++;
        }
        else
        {
            break;
        }
    }
    printf("%.lf",d);
    return 0;
}
