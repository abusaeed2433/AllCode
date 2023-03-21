#include<stdio.h>
int main()
{
    int a,b,n[1000],d[1000],i,j,t,x,y,sum;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&a,&b);
        sum=0;
        for(j=0;j<a;j++)
        {
            scanf("%d",&n[j]);
            sum=sum+n[j];
        }
        if(sum>=b)
        {
            d[i]=b;
        }
        else
        {
            d[i]=sum;
        }
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",d[i]);
    }
}
