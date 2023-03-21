#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t,a,b,c,e,i,j,y;
    scanf("%d",&t);
    int d[t];
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&a,&b);
        c=abs(a-b);
        if(c%5==0)
        {
            d[i]=c/5;
        }
        else
        {
            e=c%5;
            if(e%2==0)
            {
                d[i]=(c/5)+(e/2);
            }
            else
            {
                d[i]=(c/5)+(e/2)+1;
            }
        }
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",d[i]);
    }
    return 0;
}
