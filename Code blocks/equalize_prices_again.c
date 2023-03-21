#include<stdio.h>
#include<math.h>
int main()
{
    int t,i,j,n;
    scanf("%d",&t);
    int x[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        int a[n],sum=0;
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
            sum+=a[j];
        }
        if(sum%n==0)
        {
            x[i]=sum/n;
        }
        else
        {
            x[i]=(sum/n)+1;
        }
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",x[i]);
    }
    return 0;
}
