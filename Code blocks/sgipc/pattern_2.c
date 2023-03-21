#include<stdio.h>
int main()
{
    int a,b,i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d",j+1);
        }
        printf("\n");
    }
    for(i=n-2;i<n&&i>=0;i--)
    {
        for(j=0;j<=i;j++)
            {
                printf("%d",j+1);
            }
            printf("\n");
    }
}
