
#include<stdio.h>
int main()
{
    int a,b,c,d,n,x;
    printf("In one step the elephant can move 1, 2, 3, 4 or 5 positions forward.\nDistance=");
    scanf("%d",&x);
    if(x==5)
        printf("Number of step is=1");
    else if(x<5)
        printf("Number of step is=1");
    else
    {
        a=x/5;
        b=x%5;
        if(b==0)
        printf("Number of step is=%d",a);
    else
    {
        c=a+1;
        printf("Number of step is=%d",c);
    }
    }
}
