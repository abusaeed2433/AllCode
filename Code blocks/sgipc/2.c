#include<stdio.h>
int main()
{
    int t,a,b,i,d[16];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&a,&b);
        if(a>b)
        {
            d[i]=1;
        }
        else if(b>a)
        {
            d[i]=2;
        }
        else
        {
            d[i]=0;
        }
    }
    for(i=0;i<t;i++)
    {
        if(d[i]==1)
        {
            printf(">\n");
        }
        else if(d[i]==2)
        {
            printf("<\n");
        }
        else
        {
            printf("=\n");
        }
    }
    return 0;
}
