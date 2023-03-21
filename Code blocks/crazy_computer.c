#include<stdio.h>
int main()
{
    int t,n,i,j,a[100000],x=1;
    scanf("%d%d",&n,&t);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<(n-1);i++)
    {
        if((a[i+1]-a[i]<=t))
        {
            x++;
        }
        else
        {
            x=1;
        }
    }
    printf("%d",x);
    return 0;
}
