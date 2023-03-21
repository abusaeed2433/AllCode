#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%3==0||n%3==1)
    {
        printf("1 1 %d",(n-2));
    }
    else
    {
        printf("1 2 %d",(n-3));
    }
    return 0;
}
