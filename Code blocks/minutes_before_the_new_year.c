#include<stdio.h>
int main()
{
    int t,h,m,i,d[1440];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&h,&m);
        d[i]=1440-(60*h)-m;
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",d[i]);
    }
    return 0;
}
