#include<stdio.h>
int main()
{
    int t,a[3],c,d,i,j,k;
    long long int b[100];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[j]);
        }
        c=a[2]/2;
        if((a[2]%2)==0)
        {
            b[i]=(a[0]-a[1])*c;
        }
        else
        {
            b[i]=(a[0]-a[1])*c+a[0];
        }
    }
    for(i=0;i<t;i++)
    {
        printf("%lld\n",b[i]);
    }
}
