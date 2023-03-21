#include<stdio.h>
int main()
{
    int a[100],b,c,i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d 1\n",(a[i]-1));
    }
}
