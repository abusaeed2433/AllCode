#include<stdio.h>
int main()
{
    int n,k,i,j;
    scanf("%d%d",&n,&k);
    int a,x=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a<=(5-k))
        {
            x++;
        }
        else
        {
            continue;
        }
    }
    printf("%d",(x/3));
    return 0;
}
