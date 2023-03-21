#include<stdio.h>
int main()
{
    int t,a[1000],i,x=0;
    scanf("%d",&t);
    for(i=0;i<(t+t+t);i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<((t+t+t)-2);i=i+3)
    {
        if((a[i]+a[i+1]+a[i+2])>1)
        {
            x++;
        }
    }
    printf("%d",x);
return 0;
}
