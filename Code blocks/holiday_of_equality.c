#include<stdio.h>
int main()
{
    int n,a[100],b=0,i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(b<=a[i])
        {
            b=a[i];
        }
        else
        {
            continue;
        }
    }
    for(i=0;i<n;i++)
    {
        c=c+(b-a[i]);
    }
    printf("%d",c);
}
