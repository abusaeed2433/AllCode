#include<stdio.h>
int main()
{
    int n,m,x;
    scanf("%d%d",&n,&m);
    if(n==m)
    {
        printf("%d %d",(10*n),(10*n)+1);
    }
    else if((m-n)==1)
    {
        printf("%d %d",n,m);
    }
    else if((n-m)==8)
    {
        printf("9 10");
    }
    else
    {
        printf("-1");
    }
    return 0;
}
