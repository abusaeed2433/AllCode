#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,x;
    char s[101],c[101];
    scanf("%s%s",s,c);
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        if(s[i]==c[n-i-1])
        {
            x=1;
        }
        else
        {
            x=0;
            break;
        }
    }
    if(x==0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    return 0;
}
