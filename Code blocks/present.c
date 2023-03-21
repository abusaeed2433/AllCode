#include<stdio.h>
int main()
{
    int n,i,j,b;
    scanf("%d",&n);
    int c[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&b);
        c[b-1]=i+1;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}
