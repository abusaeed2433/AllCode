#include<stdio.h>
int main()
{
    int n,i,j,k,x=0,y=100,z,m,p;
    scanf("%d",&n);
    int a[n],b[n],c[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(x>a[i])
        {
            z=1;
        }
        else
        {
            x=a[i];
        }
        if(y<a[i])
        {
            z=1;
        }
        else
        {
            y=a[i];
        }
    }
    m=x+y;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j!=i&&a[j]!=0)
            {
                if((m-a[i])==a[j])
                {
                    printf("%d %d\n",i+1,j+1);
                    a[i]=0;
                    a[j]=0;
                }
                else
                {
                    continue;
                }
            }
            else
            {
                continue;
            }
        }
    }
    return 0;
}
