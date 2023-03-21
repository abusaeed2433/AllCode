#include<stdio.h>
int main()
{
    int t,n,x,y,c=0,c1=0,z=0,z1=0,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d",&n,&x,&y);
        if(n==1)
        {
            z++;
            c=c+x;
        }
        else if(n==2)
        {
            z1++;
            c1=c1+x;
        }
    }
    if(c>=((10*z)/2))
    {
        printf("LIVE\n");
    }
    else
    {
        printf("DEAD\n");
    }
    if(c1>=((10*z1)/2))
    {
        printf("LIVE\n");
    }
    else
    {
        printf("DEAD\n");
    }
    return 0;
}
