#include<stdio.h>
int main()
{
    int n,i,b;
    scanf("%d",&n);
    int s[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&b);
        s[b-1]=i+1;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",s[i]);
    }
    return 0;
}
