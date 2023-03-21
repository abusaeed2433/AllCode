#include<stdio.h>
int main()
{
    int t,n,x,i;
    scanf("%d",&t);
    int d[t];
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&n,&x);
        d[i]=2*x;
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",d[i]);
    }
    return 0;
}
