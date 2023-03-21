#include<stdio.h>
#include<math.h>
int main()
{
    int l,r,a,c,d;
    scanf("%d%d%d",&l,&r,&a);
    c=l-r;
    c=abs(c);
    if(c>=a)
    {
        d=(l>=r)?r:l;
        printf("%d",2*(d+a));
    }
    else
    {
        d=(l>=r)?l:r;
        printf("%d",(2*d)+2*((a-c)/2));
    }
    return 0;
}
