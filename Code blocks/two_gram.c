#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,i,j,k,x,m,p;
    char s[102];
    scanf("%d",&x);
    scanf("%s",&s);
    int y=0,z=0;
    for(i=0;i<(x-1);i++)
    {
        for(j=0;j<(x-1);j++)
        {
            if(s[i]==s[j]&&s[i+1]==s[j+1])
            {
                y++;
            }
            else
            {
                continue;
            }
        }
        if(z>y)
        {
            y=0;
        }
        else
        {
            z=y;
            y=0;
            m=i;
        }
    }
    printf("%c%c",s[m],s[m+1]);
    return 0;
}
