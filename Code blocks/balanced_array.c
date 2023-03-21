#include<stdio.h>
int main()
{
    int t,i,j,n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        if(n%4==0)
        {
            printf("YES\n");
            for(j=2;j<=(n/2);j+=2)
            {
                printf("%d ",j);
            }
            for(j=1;j<=(3*n)/2;j+=2)
            {
                printf("%d ",j);
            }
            printf("\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
