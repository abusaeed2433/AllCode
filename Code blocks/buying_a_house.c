#include<stdio.h>
int main()
{
    int n,m,k,i,j,c=0,d=0,z;
    scanf("%d%d%d",&n,&m,&k);
    m=m-1;
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    z=0;
    for(i=m-1;i>=0;i--)
    {
        if(a[i]!=0&&a[i]<=k)
        {
            z++;
            d=10*z;
            z=0;
            break;
        }
        else
        {
            z++;
        }
    }
    int y=0;
    for(i=m+1;i<n;i++)
    {
        if(a[i]!=0&&a[i]<=k)
        {
            y++;
            c=10*y;
            y=0;
            break;
        }
        else
        {
            y++;
        }
    }
    if(c!=0&&d!=0)
    {
        if(y>0&&z==0)
        {
            printf("%d",d);
        }
        else if(z>0&&y==0)
        {
            printf("%d",c);
        }
        else
        {
            c=(c>=d)?d:c;
            printf("%d",c);
        }
    }
    else
    {
        if(c==0)
        {
            printf("%d",d);
        }
        else
        {
            printf("%d",c);
        }
    }
    return 0;
}
