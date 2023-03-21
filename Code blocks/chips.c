#include<stdio.h>
int main()
{
    int n,m,i,sum=0;
    scanf("%d%d",&n,&m);
    label:
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
        if(sum==m)
        {
            printf("0");
            break;
        }
        else if(sum>m)
        {
            printf("%d",(m+i-sum));
            break;
        }
        else
        {
            continue;
        }
    }
    if(sum<m)
    {
        goto label;
    }
    return 0;
}
