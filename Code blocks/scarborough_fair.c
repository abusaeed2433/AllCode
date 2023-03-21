#include<stdio.h>
int main()
{
    int n,m,i,j,l,r;
    char s[100],c,d;
    scanf("%d%d",&n,&m);
    scanf("%s",&s);
    for(i=1;i<=m;i++)
    {
        scanf("%d%d",&l,&r);
        scanf(" %c %c",&c,&d);
        for(j=(l-1);j<r;j++)
        {
            if(s[j]==c)
            {
                s[j]=d;
            }
            else
            {
                continue;
            }
        }
    }
    printf("%s",s);
    return 0;
}
