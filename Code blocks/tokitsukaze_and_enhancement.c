#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d",&n);
    if(n%4==1)
    {
        printf("0 A");
    }
    else if(n%4==3)
    {
        printf("2 A");
    }
    else if(n%4==2)
    {
        printf("1 B");
    }
    else if(n%4==0)
    {
        printf("1 A");
    }
    return 0;
}
