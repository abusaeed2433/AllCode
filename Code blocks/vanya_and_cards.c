#include<stdio.h>
int main()
{
    int n,t,i,j,d;
    scanf("%d%d",&n,&t);
    int a[n],sum=0,x=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    if(sum==0)
    {
        printf("%d",x);
    }
    else
    {
        sum=abs(sum);
        if(sum%t==0)
        {
            printf("%d",(sum/t));
        }
        else
        {
            printf("%d",((sum/t)+1));
        }
    }
    return 0;
}
