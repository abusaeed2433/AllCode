#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n],b[n];
    int sum1=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum1=sum1+a[i];
    }
    int sum2=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
        sum2=sum2+b[i];
    }
    if(sum2<=sum1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
