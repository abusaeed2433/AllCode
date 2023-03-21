#include<stdio.h>
int main(){
    double d,l,v1,v2,t;
    scanf("%lf%lf%lf%lf",&d,&l,&v1,&v2);
    l=(l-d);
    v1=(v1+v2);
    t=(float)l/(float)v1;
    printf("%.20f",t);
    return 0;
}
