#include<stdio.h>
int main()
{
    int t,i,j,b,m;
    scanf("%d%d",&t,&m);
    int n[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<t;i++)
    {
        for(j=0;j<(t-1);j++)
        {
            if(n[j]>=n[j+1])
            {
                continue;
            }
            else
            {
                b=n[j];
                n[j]=n[j+1];
                n[j+1]=b;
            }
        }
    }
    int sum=0;
    for(i=0;i<t;i++)
    {
         sum=sum+n[i];
         if(sum>=m)
         {
             printf("%d",i+1);
             break;
         }
         else
         {
             continue;
         }
    }
    return 0;
}
