#include<stdio.h>
int main()
{
    double n,m,a,b,c=1000000.0,d;
    int i;
    scanf("%lf%lf",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%lf%lf",&a,&b);
        d=a/b;
        if(c>=d)
        {
            c=d;
        }
        else
        {
            continue;
        }
    }
    printf("%.8f",(m*c));
    return 0;
}
