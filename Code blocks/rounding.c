#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%5==0&&n%10!=0)
    {
        printf("%d",n+5);
    }
    else if(n%10==0)
    {
        printf("%d",n);
    }
    else
    {
        int b;
        b=n/5;
        if((5*b)%10==0)
        {
            printf("%d",(5*b));
        }
        else
        {
            printf("%d",(5*(b+1)));
        }
    }
    return 0;
}
