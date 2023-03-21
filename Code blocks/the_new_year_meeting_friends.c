#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b&&a>=c)
    {
        if(b<=c)
        {
            printf("%d",(a-c)+(c-b));
        }
        else
        {
            printf("%d",(a-b)+(b-c));
        }
    }
    else if(b>=a&&b>=c)
    {
        if(a<=c)
        {
            printf("%d",(b-c)+(c-a));
        }
        else
        {
            printf("%d",(b-a)+(a-c));
        }
    }
    else if(c>=a&&c>=b)
    {
        if(b<=a)
        {
            printf("%d",(c-a)+(a-b));
        }
        else
        {
            printf("%d",(c-b)+(b-a));
        }
    }
    return 0;
}
