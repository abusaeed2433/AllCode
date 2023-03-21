#include<stdio.h>
int main()
{
    int w,h,k,i,x=0,y;
    scanf("%d%d%d",&w,&h,&k);
    for(i=1;i<=k;i++)
    {
        y=2*(w+h-2);
        w=w-4;
        h=h-4;
        x=x+y;
    }
    printf("%d",x);
    return 0;
}
