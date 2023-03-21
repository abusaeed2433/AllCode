#include<stdio.h>
main()
{
    int a[51],n,k,i,count=0;
    scanf("%d %d",&n,&k);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    k=a[k];
    for(i=1;i<=n;i++)
    {
        if(a[i]>0&&a[i]>=k)
            count++;
    }
    printf("%d",count);
}
