#include<stdio.h>
#include<string.h>
int main()
{
    int i,x=0,n;
    char s[51];
    scanf("%s",s);
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='1'||s[i]=='3'||s[i]=='5'||s[i]=='7'||s[i]=='9')
        {
            x++;
        }
        else
        {
            continue;
        }
    }
    printf("%d",x);
    return 0;
}
