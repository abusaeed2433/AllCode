#include<stdio.h>
int main()
{
    int n,m,i,j;
    scanf("%d%d",&n,&m);
    int a[m];
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<m-1;j++)
        {
            if(a[j]<=a[j+1])
            {
                continue;
            }
            else
            {
                int p=a[j];
                a[j]=a[j+1];
                a[j+1]=p;
            }
        }
    }
    int x=1;y=1000000000,z=0;
    for(i=0;i<n-1;i++)
    {
        if((a[i+1]-a[i])<y)
        {
            y=a[i+1]-a[i];
            x++;
        }
        else
        {
            if(z>x)
            {
                x=0;
            }
            else
            {
                z=x;
                x=0;
            }
        }
    }
    if(x>z)
    {
        z=x;
    }
    if(z<=m)
    {
        printf("")
    }
}
