#include<stdio.h>
int main()
{
    int d1,d2,d3,d;
    scanf("%d%d%d",&d1,&d2,&d3);
    if(d1<=d2)
    {
        if(d3<=(d1+d2))
        {
            if((d1+d3)<=d2)
            {
                printf("%d",d1+d3+d1+d3);
            }
            else
            {
                printf("%d",d1+d3+d2);
            }
        }
        else
        {
            if((d1+d3)<=d2)
            {
                printf("%d",d1+d1+d2+d1+d3);
            }
            else
            {
                printf("%d",d1+d1+d2+d2);
            }
        }
    }
    else
    {
        if(d3<=(d1+d2))
        {
            if(d1<=(d2+d3))
            {
                printf("%d",d2+d3+d1);
            }
            else
            {
                printf("%d",d2+d3+d2+d3);
            }
        }
        else
        {
            if(d1<=(d2+d3))
            {
                printf("%d",d2+d1+d2+d1);
            }
            else
            {
                printf("%d",d2+d1+d2+d2+d3);
            }
        }
    }
    return 0;
}