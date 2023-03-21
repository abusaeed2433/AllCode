#include<stdio.h>
int main()
{
    int t,a,b,c,d,k,i,j,w[100],x[100],y[100];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d%d%d",&a,&b,&c,&d,&k);
        if(a%c==0)
        {
            w[i]=a/c;
        }
        else
        {
            w[i]=(a/c)+1;
        }
        if(b%d==0)
        {
            x[i]=b/d;
        }
        else
        {
            x[i]=(b/d)+1;
        }
        y[i]=k;
    }
    for(i=0;i<t;i++)
    {
        if((w[i]+x[i])>y[i])
        {
            printf("-1\n");
        }
        else
        {
            printf("%d %d\n",w[i],x[i]);
        }
    }
    return 0;
}
