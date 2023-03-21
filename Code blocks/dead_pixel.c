#include<stdio.h>
int main()
{
    int t,a,b,x,i,j,f,d[10000],y[4];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d%d",&a,&b,&x,&f);
        y[0]=a*f;
        y[1]=b*x;
        y[2]=a*(b-f-1);
        y[3]=b*(a-x-1);
        d[i]=0;
        for(j=0;j<4;j++)
        {
            if(d[i]>=y[j])
            {
                continue;
            }
            else
            {
                d[i]=y[j];
            }
        }
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",d[i]);
    }
    return 0;
}
