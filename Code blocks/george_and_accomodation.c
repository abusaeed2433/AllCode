#include<stdio.h>
int main()
{
    int t,l,c,i,d=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&l,&c);
        if((c-l)>=2)
        {
            d++;
        }
        else
        {
            continue;
        }
    }
    printf("%d",d);
    return 0;
}
