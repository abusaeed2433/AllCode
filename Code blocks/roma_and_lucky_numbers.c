#include<stdio.h>
int main()
{
    int n,k,i,j,a,x,y,z=0;
    scanf("%d%d",&n,&k);
    char s[11];
    for(i=0;i<n;i++)
    {
        y=0;
        scanf("%s",s);
        x=strlen(s);
        for(j=0;j<x;j++)
        {
            if(s[j]=='4'||s[j]=='7')
            {
                y++;
            }
            else
            {
                continue;
            }
        }
        if(y<=k)
        {
            z++;
        }
    }
    printf("%d",z);
    return 0;
}
