#include<stdio.h>
int main()
{
    int t,a,b,c,d[100],i,x,y,z;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if((2*b)<=c)
        {
            x=3*b;
        }
        else
        {
            y=c/2;
            x=y*3;
            b=b-y;
            if((2*a)<=b)
            {
                x=x+(3*a);
            }
            else
            {
                z=b/2;
                x=x+(3*z);
            }
        }
        d[i]=x;
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",d[i]);
    }
return 0;
}
