#include<stdio.h>
#include<string.h>
int main()
{
    int x,i;
    char s[101];
    for(i=0;i<101;i++)
    {
        scanf("%s",s);
        x=strlen(s);
        int e=2;
        if(s[x-1]=='?'&&s[x-e]!=' ')
        {
            if(s[x-e]=='a'||s[x-e]=='e'||s[x-e]=='i'||s[x-e]=='o'||s[x-e]=='u'||s[x-e]=='y'||s[x-e]=='A'||s[x-e]=='E'||s[x-e]=='I'||s[x-e]=='O'||s[x-e]=='U'||s[x-e]=='Y'&&s[x-e]!=' ')
            {
                printf("YES");
                break;
            }
            else
            {
                printf("NO");
                break;
            }
        }
        else
        {
            e++;
        }
    }

    return 0;
}
