#include<stdio.h>
int main()
{
    int t,i,j,count=0;
    char s[101];
    scanf("%d",&t);
    scanf("%s",&s);
    for(i=0;i<=(t-2);i++)
    {
        if(s[i]=='x'&&s[i]==s[i+1]&&s[i+1]==s[i+2])
        count++;
    }
    printf("%d",count);
}
