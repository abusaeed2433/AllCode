#include<stdio.h>
int main()
{
    int i,n,b,j;
    char s[6];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&s);
        if(s[1]==s[2]&&s[1]=='O'||s[3]==s[4]&&s[3]=='O')
        {
            s[1]='+';
            s[2]='+';
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%s",)
    }
}
