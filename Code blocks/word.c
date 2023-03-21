#include<stdio.h>
#include<string.h>
int main()
{
    int i,d,x,y=0,z=0;
    char s[100];
    scanf("%s",&s);
    x=strlen(s);
    for(i=0;i<x;i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            y++;
        }
        else if(s[i]>='a'&&s[i]<='z')
        {
            z++;
        }
    }
    if(z>=y)
    {
        for(i=0;i<x;i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
            {
                s[i]=(int)s[i]+32;
            }
            else
            {
                continue;
            }
        }
    }
    else if(z<y)
    {
        for(i=0;i<x;i++)
        {
            if(s[i]>='a'&&s[i]<='z')
            {
                s[i]=(int)s[i]-32;
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
