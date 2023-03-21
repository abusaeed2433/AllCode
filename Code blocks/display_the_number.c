#include<stdio.h>
int main()
{
    int t,i,j,x;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<t;i++)
    {
        if(a[i]%2==0)
        {
            x=a[i]/2;
            for(j=0;j<x;j++)
            {
                printf("1");
            }
        }
        else
        {
            x=(a[i]/2)-1;
            printf("7");
            for(j=0;j<x;j++)
            {
                printf("1");
            }
        }
        printf("\n");
    }
}
