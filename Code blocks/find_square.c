#include<stdio.h>
int main()
{
    int n,m,i,j;
    scanf("%d%d",&n,&m);
    char a[n+1][m+1];
    int w=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf(" %c",&a[i][j]);
            if(a[i][j]=='B')
            {
                w++;
            }
            else
            {
                continue;
            }
        }
    }
    int z=0,c;
    c=(w/2)+1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]=='B')
            {
                z++;
                if(z==c)
                {
                    printf("%d %d",i+1,j+1);
                    break;
                }
                else
                {
                    continue;
                }
            }
            else
            {
                continue;
            }
        }
    }
}
