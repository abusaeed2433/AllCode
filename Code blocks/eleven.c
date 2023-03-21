#include<stdio.h>
int main()
{
    int x=1,y=0,i,j,n,k,p;
    scanf("%d",&n);
    int z[n];
    for(i=1;i<=n;i++)
    {
        x=x+y;
        y=x-y;
        z[i]=x;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==z[j])
            {
                p=1;
                break;
            }
            else
            {
                p=0;
            }
        }
        if(p==1)
        {
            printf("O");
        }
        else
        {
            printf("o");
        }
    }
}
