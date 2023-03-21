#include<stdio.h>
int main()
{
    int n,m,i,j;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        if(i%2==0||i==0)
        {
            for(j=0;j<m;j++)
            {
                printf("#");
            }
            printf("\n");
        }
        else if(i==1||i%4==1)
        {
            for(j=0;j<m;j++)
            {
                if(j==m-1)
                {
                    printf("#");
                }
                else
                {
                    printf(".");
                }
            }
            printf("\n");
        }
        else if(i%4==3)
        {
            for(j=0;j<m;j++)
            {
                if(j==0)
                {
                    printf("#");
                }
                else
                {
                    printf(".");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
