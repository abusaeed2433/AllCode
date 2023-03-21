#include<stdio.h>
int main()
{
    int t,a[500],b[500],c[500],d[500],i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d%d",&a[i],&b[i],&c[i],&d[i]);
    }
    for(i=0;i<t;i++)
    {
        printf("%d %d\n",a[i],d[i]);
    }
    return 0;
}
