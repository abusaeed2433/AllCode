#include<stdio.h>
int main()
{
    int n,m,i,j,k;
    scanf("%d%d",&n,&m);
    int a[n],b[m];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    int y=0,x=0,w=0;
    for(i=0;i<m;i++)
    {
        for(j=w;j<n;j++)
        {
            if(b[i]>=a[j])
            {
                x++;
                y=j;
                break;
            }
            else
            {
                y=j;
            }
        }
        w=y+1;
        if(w==n)
        {
            break;
        }
    }
    printf("%d",x);
    return 0;
}
