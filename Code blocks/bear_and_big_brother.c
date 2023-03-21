#include<stdio.h>
int main()
{
    int a,b,i,x,y;
    scanf("%d %d",&a,&b);
    if(a==b)
        printf("1");
    else
    {
        for(i=1;i<=7;i++)
        {
            a=3*a;
            b=2*b;
            if(a>b)
                {
                    printf("%d",i);
                    break;
                }
        }
    }
    return 0;
}
