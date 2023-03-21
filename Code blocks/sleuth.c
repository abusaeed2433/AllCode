#include<stdio.h>
#include<string.h>
int main()
{
    int x,i;
    char s[101];
    for(i=0;i<101;i++)
    {
        scanf("%s%s",a,s);
        x=strlen(a);
        y=strlen(s);
        if(y==1)
        {
            s
        }
        else if(x==1)
        {
            a
        }
        else
        {
            for(j=0;j<x;j++)
            {
                if(a[j]=='?')
                {
                    if(s[x-1]=='a'||s[x-1]=='e'||s[x-1]=='i'||s[x-1]=='o'||s[x-1]=='u'||s[x-1]=='y'||s[x-1]=='A'||s[x-1]=='E'||s[x-1]=='I'||s[x-1]=='O'||s[x-1]=='U'||s[x-1]=='Y')
                    {
                        printf("YES");
                    }
                    else
                    {
                        printf("NO");
                    }
                    break;
                }
                else
                {
                    continue;
                }
            }
//
            for(j=0;j<y;j++)
            {
                if(a[j]=='?'&&y==1)
                {
                    if(a[y-1]=='a'||a[y-1]=='e'||a[y-1]=='i'||a[y-1]=='o'||a[y-1]=='u'||a[y-1]=='y'||a[y-1]=='A'||a[y-1]=='E'||a[y-1]=='I'||a[y-1]=='O'||a[y-1]=='U'||a[y-1]=='Y')
                    {
                        printf("YES");
                    }
                    else
                    {
                        printf("NO");
                    }
                    break;
                }
                else
                {
                    continue;
                }
            }
//
        }
    }

    return 0;
}
