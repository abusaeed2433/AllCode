#include<stdio.h>
int main()
{
    int t,i,j;
    scanf("%d",&t);
    int x[t],a,b,c,d,sum,s;
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d%d",&a,&b,&c,&d);
        sum=a+b+c;
        if(a>=b&&a>=c)
        {
            s=d-((3*a)-sum);
        }
        else if(b>=a&&b>=c)
        {
            s=d-((3*b)-sum);
        }
        else
        {
            s=d-((3*c)-sum);
        }
        if(s==0)
        {
            x[i]=1;
        }
        else if(s>2&&s%3==0)
        {
            x[i]=1;
        }
        else
        {
            x[i]=0;
        }
    }
    for(i=0;i<t;i++)
    {
        if(x[i]==1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
