#include<stdio.h>
int main()
{
    int i,j,k,l,t,a[21],b[21],c[21],max[21];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d",&a[i],&b[i],&c[i]);
        if(a[i]>=b[i]&&a[i]>=c[i])
        {
            max[i]=a[i];
        }
        else if(b[i]>=a[i]&&b[i]>=c[i])
        {
            max[i]=b[i];
        }
        else
        {
            max[i]=c[i];
        }
    }
    for(l=0;l<t;l++)
    {
        printf("Case %d:\n",(l+1));
        for(i=0;i<(max[l]-1);i++)
        {
            for(j=i+1;j<max[l];j++)
            {
                for(k=(j+1);k<=max[l];k++)
                {
                    printf("%d %d %d\n",i,j,k);
                }
            }
        }
    }
    return 0;
}
