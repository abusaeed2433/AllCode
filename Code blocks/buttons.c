#include<stdio.h>
int main()
{
    int n,i,j,s=0;
    scanf("%d",&n);
    s=(n*(n+1))/2;
    for(i=n-1;i>0;i--)
    {
        s+=(n-i)*(i-1);
    }
    printf("%d",s);
    return 0;
}
