#include<stdio.h>
int main()
{
    int i,n;
    char s[1001];
    scanf("%s",s);
    n=strlen(s);
    printf("%s",s);
    for(i=(n-1);i>=0;i--)
    {
        printf("%c",s[i]);
    }
    return 0;
}
