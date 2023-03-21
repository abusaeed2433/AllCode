#include<stdio.h>
int main()
{
    int n,m,i,j,b[200],x=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<2*m;j++)
        {
            scanf("%d",&b[j]);
        }
        for(j=0;j<(2*m-1);j=j+2)
        {
            if(b[j]==0&&b[j+1]==0)
            {
                continue;
            }
            else
            {
                x++;
            }
        }
    }
    printf("%d",x);
}
