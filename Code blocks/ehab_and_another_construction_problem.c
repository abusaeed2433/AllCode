#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x==1)
    {
        printf("-1");
    }
    else
    {
        if(x%2==0)
        {
            printf("%d 2",x);
        }
        else
        {
            printf("%d 2",x-1);
        }
    }
    return 0;
}
