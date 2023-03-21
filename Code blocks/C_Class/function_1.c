#include<stdio.h>
int fun(int bar)
{
    return bar+1;
}
int main()
{
    int a,b,c,bar;
    scanf("%d",&a);
    printf("%d",fun(a));
}

