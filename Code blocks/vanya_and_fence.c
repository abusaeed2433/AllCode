#include<stdio.h>
int main()
{
    int n,h,a[1000],i,x=0;
    scanf("%d %d",&n,&h);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<=h)
        {
            x++;
        }
        else
        {
            x=x+2;
        }
    }
    printf("%d",x);
    return 0;
}
