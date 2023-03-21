#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,x;
    char s[2001];
    scanf("%d%s",&n,&s);
    for(i=n-2;i>=0;i-=2)
    {
        printf("%c",s[i]);
    }
    if(n%2==0)
    {
    for(i=1;i<n;i+=2)
    {
        printf("%c",s[i]);
    }
    }
    else
    {
    for(i=0;i<n;i+=2)
    {
        printf("%c",s[i]);
    }
    }
    return 0;
}
