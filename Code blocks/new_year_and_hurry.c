#include<stdio.h>
int main()
{
    int n,k,i,c,sum=0;
    scanf("%d%d",&n,&k);
    c=240-k;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
        if((5*sum)<=c)
        {
            continue;
        }
        else
        {
            printf("%d",i-1);
            break;
        }
    }
    if((5*sum)<=c)
    {
        printf("%d",n);
    }
    return 0;
}
