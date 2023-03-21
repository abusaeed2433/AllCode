#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(b%a==0)
    {
        printf("%d",(b/a));
    }
    else
    {
        printf("%d",((b/a)+1));
    }
    return 0;
}
