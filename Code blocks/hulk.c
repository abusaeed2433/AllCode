#include<stdio.h>
int main()
{
    int i,a,n;
    scanf("%d",&n);
    if(n==1)
    {
        printf("I hate it");
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            if(i%2==0)
            {
                printf("I love ");
            }
            else
                printf("I hate ");
            if(i<n)
            {
                printf("that ");
            }
            else if(i==n)
            {
                printf("it");
            }
        }
    }

}
