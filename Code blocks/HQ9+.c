#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,z,x;
    char s[100];
    scanf("%s",&s);
    x=strlen(s);
    for(i=0;i<x;i++)
    {
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
        {
            z=0;
            break;
        }
        else
        {
            z=1;
            continue;
        }
    }
    if(z==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
