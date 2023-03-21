#include<stdio.h>
int main(){

    double a,b,c,q,r,m;
    scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&q,&r,&m);
    double z;
    z = (8.8*(a+b)*2/c - .5+2*a/(q+r))/((a+b)*(1/m));
    printf("%lf",z);
    return 0;
}
