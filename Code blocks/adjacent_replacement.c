#include<stdio.h>
int main()
{
    int t,n[1000],i,j;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<t;i++)
    {
        if(n[i]%2==0)
        {
            printf("%d ",n[i]-1);
        }
        else
        {
            printf("%d ",n[i]);
        }
    }
    return 0;
}
