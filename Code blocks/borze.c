#include<stdio.h>
#include<string.h>
int main()
{
    char s[201];
    int i,j,x;
    scanf("%s",s);
    x=strlen(s);
    for(i=0;i<x;i++)
    {
        if(s[i]=='.')
        {
            printf("0");
        }
        else
        {
            if(s[i+1]=='-')
            {
                printf("2");
            }
            else
            {
                printf("1");
            }
            i=i+1;
        }
    }
    return 0;
}
