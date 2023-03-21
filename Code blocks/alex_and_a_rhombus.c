#include<stdio.h>
int main()
{
    int n,s=1,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+4*(i-1);
    }
    printf("%d",s);
    return 0;
}
