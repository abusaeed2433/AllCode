#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((4*a)<=(2*b)&&(4*a)<=c)
    {
        printf("%d",(7*a));
    }
    else if((4*a)>=(2*b)&&(2*b)<=c)
    {
        printf("%d",(7*(int)(b/2)));
    }
    else if(c<=(4*a)&&(2*b)>=c)
    {
        printf("%d",(7*(int)(c/4)));
    }
    return 0;
}
