#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,x1,x2;
    printf("ideal format:\nax2+bx+c=0\n");
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("c=");
    scanf("%d",&c);
    x1=(-b+sqrt(b*b-4*a*c))/(2*a);
    x2=(-b-sqrt(b*b-4*a*c))/(2*a);
    printf("x1=%d \nx2=%d",x1,x2);
    return 0;
}
