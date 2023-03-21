#include<stdio.h>
int main()
{
    int n,i,j,k,l;
    scanf("%d",&n);
    int a[n+1];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    int z=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==i)
            {
                continue;
            }
            else
            {
                if(a[i]==j)
                {
                    for(k=1;k<=n;k++)
                    {
                        if(k!=i&&k!=j&&a[j]==k&&a[k]==i)
                        {
                            z=1;
                            break;
                        }
                        else
                        {
                            continue;
                        }
                    }
                }
                else
                {
                    continue;
                }
            }
        }
    }
    if(z==0)
    {
        printf("NO");
    }
    else if(z==1)
    {
        printf("YES");
    }
    return 0;
}
