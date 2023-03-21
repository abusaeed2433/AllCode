#include<stdio.h>
int main()
{
    double n,p,q;
    scanf("%lf%lf%lf",&n,&p,&q);
    if((int)n%(int)(p+q)==0)
    {
        printf("%d",(int)((n*p)/(p+q)));
    }
    else
    {
        printf("%.4f",(float)((n*p)/(p+q)));
    }
}
