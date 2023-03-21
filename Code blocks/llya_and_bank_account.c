#include<stdio.h>
#include<string.h>
int main()
{
    char s[13];
    int i,n;
    scanf("%s",s);
    n=strlen(s);
    if(s[0]!='-')
    {
        printf("%s",s);
    }
    else if(s[0]=='-'&&n==2)
    {
        printf("0");
    }
    else if(s[0]=='-'&&n==3&&s[2]=='0')
    {
        printf("0");
    }
    else
    {
        int i;
        if(s[n-1]>=s[n-2])
        {
            for(i=0;i<n-1;i++)
            {
                printf("%c",s[i]);
            }
        }
        else
        {
            for(i=0;i<n;i++)
            {
                if(i==(n-2))
                {
                    continue;
                }
                else
                {
                    printf("%c",s[i]);
                }
            }
        }
    }
    return 0;
}
