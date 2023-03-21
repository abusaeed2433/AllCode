#include<stdio.h>
int main()
{
    int t,a[1000],b[1000],i,min,min1;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
    }
    min=b[0];
    min1=b[0];
    for(i=0;i<(t-1);i++)
    {
        if(min>=(min1+b[i+1]-a[i+1]))
        {
            min1=min1+b[i+1]-a[i+1];
        }
        else
        {
            min=min1+b[i+1]-a[i+1];
            min1=min1+b[i+1]-a[i+1];
        }
    }
    printf("%d",min);
}
