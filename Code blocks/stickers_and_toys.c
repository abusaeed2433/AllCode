#include<stdio.h>
int main()
{
    int t,n,s,i,c;
    scanf("%d",&c);
    int d[c];
    for(i=0;i<c;i++)
    {
        scanf("%d%d%d",&n,&s,&t);
        s=n-s;
        t=n-t;
        if(s>=t)
        {
            d[i]=s+1;
        }
        else
        {
            d[i]=t+1;
        }
    }
    for(i=0;i<c;i++)
    {
        printf("%d\n",d[i]);
    }
    return 0;
}
