#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    int a[n],x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        printf("%d ",(a[i+1]+a[i]));
    }
    printf("%d",a[n-1]);
    return 0;
}
