#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,z,t1,t2,t3,c,d;
    scanf("%d%d%d%d%d%d",&x,&y,&z,&t1,&t2,&t3);
    c=(3*t3)+t2*(abs(z-x)+abs(y-x));
    d=t1*(abs(y-x));
    if(c<=d)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
