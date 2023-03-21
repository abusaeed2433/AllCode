#include<stdio.h>
int main()
{
    long long int yc,bc,y2,yb,b3,y,b;
    scanf("%lld%lld%lld%lld%lld",&yc,&bc,&y2,&yb,&b3);
    y=2*y2+yb;
    b=yb+3*b3;
    if(yc>=y)
    {
        if(bc>=b)
        {
            printf("0");
        }
        else
        {
            printf("%lld",b-bc);
        }
    }
    else
    {
        if(bc>=b)
        {
            printf("%lld",(y-yc));
        }
        else
        {
            printf("%lld",(y-yc)+(b-bc));
        }
    }
    return 0;
}
