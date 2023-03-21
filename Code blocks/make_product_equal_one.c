#include<stdio.h>
int main()
{
    long long int n,i,j,k;
    scanf("%lld",&n);
    long long int a[n];
    long long int x=0;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        if(a[i]<0)
        {
            x++;
        }
    }
    long long int y=0,z=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            y=y+1;
            z=1;
        }
        else if(a[i]>1)
        {
            y=y+(a[i]-1);
        }
        else if(a[i]<-1)
        {
            y=y+(-1-a[i]);
        }
    }
    if(x%2==0)
    {
        printf("%lld",y);
    }
    else
    {
        if(z==1)
        {
            printf("%lld",y);
        }
        else
        {
            printf("%lld",(y+2));
        }
    }
    return 0;
}
