#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,t,i,sum;
    scanf("%d",&t);
    int d[t];
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        sum=abs(a-c)+abs(a-b)+abs(b-c)-4;
        if(sum<=0)
        {
            d[i]=0;
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
    return 0;
}
