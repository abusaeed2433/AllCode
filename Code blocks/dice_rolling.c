#include<stdio.h>
int main()
{
    int t,n,x[100],i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        x[i]=n/2;
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",x[i]);
    }
}
