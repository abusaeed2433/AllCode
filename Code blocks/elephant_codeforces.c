#include<stdio.h>
int main()
{
    int a,b,c,d,n,x;
    scanf("%d",&x);
    if(x==5&&x<5)
        printf("1");
    else
    {
        a=x/5;
        b=x%5;
        if(b==0)
        printf("%d",a);
    else
    {
        c=a+1;
        printf("%d",c);
    }
    }
}

