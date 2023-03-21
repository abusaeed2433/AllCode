#include<stdio.h>

struct point{
        double x,y;
    };
double distance(struct point,struct point);
int main(){

    struct point p1,p2;
    printf("Enter x1 = ");
    scanf("%lf",&p1.x);
    printf("Enter y1 = ");
    scanf("%lf",&p1.y);
    printf("Enter x2 = ");
    scanf("%lf",&p2.x);
    printf("Enter y2 = ");
    scanf("%lf",&p2.y);
    printf("Distance between (%lf, %lf) and (%lf, %lf) is = %lf\n",p1.x,p1.y,p2.x,p2.y,distance(p1,p2));
    return 0;
}
double distance(struct point p1,struct point p2){
    double x = p1.x-p2.x;
    double y = p1.y-p2.y;
    double dis = sqrt(x*x + y*y);
    return dis;
}
