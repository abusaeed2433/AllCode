#include<stdio.h>
int main()
{
    int t,c,p[51],x[51],z[51],sl=0,rl=0,i,sum=0,sum1=0,g,h;
    scanf("%d%d",&t,&c);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&p[i]);
    }
    for(i=1;i<=t;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=1;i<=t;i++)
    {
        sum=sum+x[i];
        sum1=sum1+x[t-i+1];
        g=p[i]-c*sum;
        if(g<=0)
        {
            g=0;
        }
        sl=sl+g;
        h=p[t+1-i]-c*sum1;
        if((h)<=0)
        {
            h=0;
        }
        rl=rl+h;
    }
        if(sl>rl)
    {
        printf("Limak");
    }
    else if(sl<rl)
    {
        printf("Radewoosh");
    }
    else if(rl==sl)
    {
        printf("Tie");
    }
    return 0;
}
