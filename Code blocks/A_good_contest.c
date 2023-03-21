#include<stdio.h>
int main()
{
    int t,i,c;
    char s[12];
    scanf("%d",&t);
    int d=0,a,b;
    for(i=0;i<t;i++)
    {
        scanf("%s%d%d",s,&b,&a);
        if(b>=2400&&a>b)
        {
            d=1;
        }
        else
        {
            continue;
        }
    }
    if(d==1)
    {
        printf("YES");
    }
    else if(d==0)
    {
        printf("NO");
    }
}
