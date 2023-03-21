#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n],max=0,sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
        if(max>=a[i])
        {
            continue;
        }
        else
        {
            max=a[i];
        }
    }
    for(i=max;;i++)
    {
        int sum1=0;
        for(j=0;j<n;j++)
        {
            sum1=sum1+i-a[j];
        }
        if(sum1>sum)
        {
            printf("%d",i);
            break;
        }
        else
        {
            continue;
        }
    }
    return 0;
}
