#include<stdio.h>
#include<math.h>
int main()
{
    int n,d,i,j;
    scanf("%d%d",&n,&d);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i!=j&&abs(a[i]-a[j])<=d)
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
