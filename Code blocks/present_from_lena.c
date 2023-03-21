#include<stdio.h>
int main()
{
    int t,i,j,k,l,m;
    scanf("%d",&t);
    for(m=0;m<2*t;m++)
    {
        printf(" ");
    }
    printf("0\n");
    for(i=0;i<t;i++)
    {
        for(k=2;k<2*(t-i);k++)
        {
            printf(" ");
        }
        printf("0 ");
        for(j=0;j<(i+1);j++)
        {
            printf("%d ",(j+1));
        }
        for(j=i-1;j>=0;j--)
        {
            printf("%d ",j+1);
        }
        printf("0");
        printf("\n");
    }
    ///////////////////
    for(i=(t-2);i>=0;i--)
    {
        for(k=2*(t-1-i);k>0;k--)
        {
            printf(" ");
        }
        printf("0 ");
       for(j=0;j<(i+1);j++)
        {
           printf("%d ",j+1);
        }
        for(j=i;j>0;j--)
        {
            printf("%d ",j);
        }
        printf("0");
        printf("\n");
    }
        for(m=0;m<2*t;m++)
    {
        printf(" ");
    }
    printf("0\n");
    return 0;
}
