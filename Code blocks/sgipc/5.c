#include<stdio.h>
int main()
{
    int n,t,i,j,x,d[1001];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        x=1;
        for(j=1;j<=n;j++)
        {
            x=x*j;
        }
        d[i]=x;
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",d[i]);
    }
    return 0;
}
