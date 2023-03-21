#include<stdio.h>
int main(){
    printf("Enter x and y\n");
    double x,y;
    scanf("%lf%lf",&x,&y);
    x==0 && y==0 ? printf("the point is in origin\n"): x==0 ? printf("the point is in y axis\n") : y==0? printf("the point is in x axis\n"):printf("the point is not in any axis");
    return 0;
}
