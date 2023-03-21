#include<stdio.h>
int main()
{
    int n,x,i;
    scanf("%d",&n);
    if(n%2==0)
    {
        x=n/2;
        printf("%d\n",x);
        for(i=0;i<x;i++)
        {
            printf("2");
            if(i<x&&i!=(x-1))
            {
                printf(" ");
            }
        }
    }
    else if(n==3)
    {
        printf("1\n3");
    }
    else
    {
        x=n/2;
        printf("%d\n",x);
        for(i=0;i<(x-1);i++)
        {
            printf("2");
            if(i<x&&i!=(x-2))
            {
                printf(" ");
            }
        }
            if(i=(x-1))
            {
                printf(" 3");
            }
    }
}
