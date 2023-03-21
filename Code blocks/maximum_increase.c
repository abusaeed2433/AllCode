#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x=1,y=1;
    for(i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1])
        {
            x++;
        }
        else
        {
            if(x<=y)
            {
                x=0;
            }
            else
            {
                y=x;
            }
            x=1;
        }
    }
    if(x>=y)
    {
        printf("%d",x);
    }
    else
    {
        printf("%d",y);
    }
    return 0;
}
