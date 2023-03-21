#include<stdio.h>
int main()
{
    int a[100000],n,i,j,c,sum,sum1=0,sum2=0,sum3=0,sum4=0;
    scanf("%d",&n);
    for(i=0;i<(n*n);i++)
    {
        scanf("%d",&a[i]);
    }
    c=(n-1)/2;
    for(i=c;i<(n*n);i=i+n)
    {
        sum1=sum1+a[i];
    }
    for(i=(c*n);i<((c*n)+n);i++)
    {
        sum2=sum2+a[i];
    }
    for(i=0;i<(n*n);i=i+n+1)
    {
        sum3=sum3+a[i];
    }
    j=(n-1);
    for(i=0;i<n;i++)
    {
        sum4=sum4+a[j];
        j=j+n-1;
    }
    sum=sum1+sum2+sum3+sum4-3*a[((n*n)-1)/2];
    printf("%d",sum);
    return 0;
}
