#include<stdio.h>
int main()
{
    int t,a[30],b[30],i,j,x=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
    }
    for(i=0;i<t;i++)
    {
        for(j=0;j<t;j++)
        {
            if(a[i]==b[j]&&i!=j)
            {
                x++;
            }
            else
            {
                continue;
            }
        }
    }
    printf("%d",x);
    return 0;
}
