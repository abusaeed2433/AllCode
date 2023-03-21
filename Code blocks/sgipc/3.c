#include<stdio.h>
int main()
{
    int t,a,b,i,d[1001];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&a,&b);
        d[i]=a%b;
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",d[i]);
    }
    return 0;
}

