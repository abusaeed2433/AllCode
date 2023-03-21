#include<stdio.h>
int main()
{
    int t,n[1000],a,b,c,d,i,rank=1;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d%d",&a,&b,&c,&d);
        n[i]=a+b+c+d;
    }
    for(i=1;i<t;i++)
    {
        if(n[0]>=n[i])
        {
            continue;
        }
        else
        {
            rank++;
        }
    }
    printf("%d",rank);
}
