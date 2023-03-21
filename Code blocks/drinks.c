#include<stdio.h>
int main()
{
    int i;
    double n,a[100],sum=0,p,t;
    scanf("%lf",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lf",&a[i]);
        sum=sum+a[i];
    }
    t=100.0*n;
    p=(100.0*sum)/t;
    printf("%.12lf",p);
    return 0;
}
