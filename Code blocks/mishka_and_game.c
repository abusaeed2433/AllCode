#include<stdio.h>
int main()
{
    int n,m,c,i,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&m,&c);
        if(m>c)
        {
            sum++;
        }
        else if(c>m)
        {
            sum--;
        }
        else
        {
            continue;
        }
    }
    if(sum>0)
    {
        printf("Mishka");
    }
    else if(sum<0)
    {
        printf("Chris");
    }
    else
    {
        printf("Friendship is magic!^^");
    }
}
