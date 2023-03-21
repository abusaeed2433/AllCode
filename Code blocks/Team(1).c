#include<stdio.h>
int main()
{
    int n,i,x=0,a,b,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if((a+b+c)>1)
        {
            x++;
        }
        else
        {
            continue;
        }
    }
    printf("%d",x);
    return 0;
}
