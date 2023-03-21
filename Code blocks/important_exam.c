#include<stdio.h>
int main()
{
    int n,m,i,j,k,x;
    scanf("%d%d",&n,&m);
    char s[1001];
    int a[n][m],c[m];
    for(i=0;i<n;i++)
    {
        scanf("%s",s);
        for(j=0;j<m;j++)
        {
            if(s[j]=='A')
            {
                a[i][j]=1;
            }
            else if(s[j]=='B')
            {
                a[i][j]=2;
            }
            else if(s[j]=='C')
            {
                a[i][j]=3;
            }
            else if(s[j]=='D')
            {
                a[i][j]=4;
            }
            else if(s[j]=='E')
            {
                a[i][j]=5;
            }
        }
        if(i==(n-1))
        {
            for(k=0;k<m;k++)
            {
                scanf("%d",&c[k]);
            }
        }
    }
    int sum=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[0][j]==a[i][j])
            {
                sum+=c[j];
            }
            else
            {
                continue;
            }
        }
    }
    printf("%d",sum);
}
