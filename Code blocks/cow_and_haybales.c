#include<stdio.h>
int main()
{
    int t,n,d,a[101],i,j,l,x[101],y[101];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&n,&d);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        x[i]=0;
        y[i]=0;
        for(l=0;l<(n-1);l++)
        {
            if(((l+1)*a[l+1])>=(d-y[i]))
            {
                x[i]=x[i]+((d-y[i])/(l+1));
                break;
            }
            else if((l+1)*a[l+1]<(d-y[i]))
            {
                x[i]=x[i]+a[l+1];
                y[i]=y[i]+(l+1)*a[l+1];
            }
        }
        x[i]=x[i]+a[0];
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",x[i]);
    }
    return 0;
}
