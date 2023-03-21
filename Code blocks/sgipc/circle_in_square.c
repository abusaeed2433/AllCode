#include<stdio.h>
#include<math.h>
int main()
{
    int i,t;
    double r;
    scanf("%d",&t);
    double d[t],p=2*(acos(0.0));
    for(i=1;i<=t;i++)
    {
        scanf("%lf",&r);
        d[i]=(4*r*r)-(p*r*r)+pow(10,-9);
    }
    for(i=1;i<=t;i++)
    {
        printf("Case %d: %.2lf\n",(i+1),d[i]);
    }
    return 0;
}
