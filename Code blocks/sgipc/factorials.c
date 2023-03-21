#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,l;
    char s[25];
    scanf("%d%s",&n,s);
    l=strlen(s);
    int m=1;
    for(i=n;i>0;i=i-l)
    {
        m=m*i;
    }
    printf("%d",m);
    return 0;
}
