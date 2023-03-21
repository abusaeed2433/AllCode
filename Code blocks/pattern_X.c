#include<stdio.h>
int main()
{
    int i,j,n,k;
    char z=' ';
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(k=0;k<i;k++)
        {
            printf("%c",z);
        }
        for(j=0;j<(n-i);j++)
        {

            printf("X ");
        }
        printf("\n");
    }
    for(i=1;i<n;i++)
    {
        for(k=1;k<(n-i);k++)
        {
            printf("%c",z);
        }
        for(j=0;j<=i;j++)
        {

            printf("X ");
        }
        printf("\n");
    }
    return 0;
}
