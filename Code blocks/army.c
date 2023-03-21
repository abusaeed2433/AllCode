#include<stdio.h>
int main()
{
    int t,i,j,k,n;
    scanf("%d",&n);
    int d[n],a,b,sum=0;
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&d[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=a-1;i<(b-1);i++)
    {
        sum+=d[i];
    }
    printf("%d",sum);
    return 0;
}
