#include<stdio.h>
main()
{
    int a[5][5],i,j,c,d,x,y,z;
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=4;j++)
        {
            if(a[i][j]==1)
            {
                c=i;
                d=j;
            }
        }
    }
    if(c>=2)
        x=c-2;
    else
        x=2-c;
    if(d>=2)
        y=d-2;
    else
        y=2-d;
    z=x+y;
    printf("%d",z);
}
