#include<stdio.h>
int main()
{
    int t,n,a,i,j,sum,x,count,d[1000];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        count=0;
        sum=0;
        x=0;
        for(j=0;j<n;j++)
        {
            scanf("%d",&a);
            if(a==0)
            {
                count=1;
                x++;
                sum=sum+1;
            }
            else
            {
                sum=sum+a;
            }
        }
        if(sum==0)
        {
            d[i]=x+1;
        }
        else if(sum!=0)
        {
            d[i]=x;
        }
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",d[i]);
    }
    return 0;
}
