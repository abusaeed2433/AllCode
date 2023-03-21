#include<stdio.h>
int main()
{
    int t,n[101],i,j,k,p;
    int a[101][101],b[101][101];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n[i]);//number of daughter=n//
/*taking input of brightness of necklace*/
        for(j=0;j<n[i];j++)
        {
            scanf("%d",&a[i][j]);
        }
/*taking input of brightness of bracelet*/
        for(j=0;j<n[i];j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
/*ascending order of brightness of necklace*/
    for(i=0;i<t;i++)
    {
        for(j=0;j<n[i];j++)
        {
            for(k=0;k<(n[i]-1);k++)
            {
                if(a[i][k]>=a[i][k+1])
                {
                    continue;
                }
                else
                {
                    p=a[i][k];
                    a[i][k]=a[i][k+1];
                    a[i][k+1]=p;
                }
            }
        }
/*ascending order for brightness of bracelet*/
        for(j=0;j<n[i];j++)
        {
            for(k=0;k<(n[i]-1);k++)
            {
                if(b[i][k]>=b[i][k+1])
                {
                    continue;
                }
                else
                {
                    p=b[i][k];
                    b[i][k]=b[i][k+1];
                    b[i][k+1]=p;
                }
            }
        }
        for(j=0;j<n[i];j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
        for(j=0;j<n[i];j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
