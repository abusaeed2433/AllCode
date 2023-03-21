#include<stdio.h>
int main()
{
    int n,a,b,i,j;
    //taking input
    scanf("%d%d%d",&n,&a,&b);
    int c[a],d[b];
    for(i=0;i<a;i++)
    {
        scanf("%d",&c[i]);
    }
    for(i=0;i<b;i++)
    {
        scanf("%d",&d[i]);
    }
    //input taken//
    //calculating, if value of i found in c[a], it will print 1 else 2//
    for(i=0;i<n;i++)
    {
        int z=2;
        for(j=0;j<a;j++)
        {
            if((i+1)==c[j])
            {
                z=1;
                break;
            }
            else
            {
                continue;
            }
        }
        printf("%d ",z);
    }
    return 0;
}
