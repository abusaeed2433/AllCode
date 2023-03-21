#include<stdio.h>
int main()
{
    int n,m,i,j,k,c;
    scanf("%d%d",&n,&m);
    int a[n],sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    c=(sum)/(4*m);
    int x=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>=c)
        {
            x++;
        }
        else
        {
            continue;
        }
    }
    if(x>=m)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
