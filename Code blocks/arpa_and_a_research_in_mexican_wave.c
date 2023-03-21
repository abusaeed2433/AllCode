#include<stdio.h>
int main()
{
    int n,k,t;
    scanf("%d%d%d",&n,&k,&t);
    if(t>=k&&t<=n)
    {
        printf("%d",k);
    }
    else if(t<k)
    {
        printf("%d",t);
    }
    else if(t>n)
    {
        printf("%d",(n+k-t));
    }
    return 0;
}
