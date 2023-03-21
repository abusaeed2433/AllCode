#include<stdio.h>
int main()
{
    double v1,v2,v3,tt,a1,a2,d[101],x[101];
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lf%lf%lf%lf%lf",&v1,&v2,&v3,&a1,&a2);
        tt=(v1/a1);
        d[i]=tt*v3;
        x[i]=(v1+v2)*(tt/2.0);
    }
    for(i=0;i<t;i++)
    {
        printf("Case %d: %.8lf %.1lf\n",i+1,x[i],d[i]);
    }
    return 0;
}
