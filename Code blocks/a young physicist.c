#include<stdio.h>
int main()
{
    int a[100],b[100],c[100],s=0,s2=0,s3=0,i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d",&a[i],&b[i],&c[i]);
    }
    for(i=1;i<=n;i++)
    {
        s=s+a[i];
        s2=s2+b[i];
        s3=s3+c[i];
    }
    if(s==0&&s2==0&&s3==0)
        printf("YES");

    else
        printf("NO");
    return 0;
}
