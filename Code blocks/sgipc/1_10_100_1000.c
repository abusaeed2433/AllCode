#include<stdio.h>
#include<math.h>
int main()
{
    long long int n=1,m,x1,x2,x,s;
    int i,j,t;
    scanf("%d",&t);
    int y[t];
    for(i=0;i<t;i++)
    {
        scanf("%lld",&m);
        x1=(-1+(sqrt(1+8*(m-1))))/2;
        x2=(-1-(sqrt(1+8*(m-1))))/2;
        x=(x1>x2)?x1:x2;
        x=(int)x;
        s=(x*(x+1))/2;
        if(s==m-1)
        {
            //printf("1");
            y[i]=1;
        }
        else
        {
            //printf("0");
            y[i]=0;
        }
    }
    for(i=0;i<t;i++)
    {
        printf("%d ",y[i]);
    }
    return 0;
}
