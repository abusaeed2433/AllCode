#include<stdio.h>
int main()
{
    int n,i,d=0;
    char s[50];
    scanf("%d%s",&n,&s);
    for(i=0;i<(n-1);i++)
    {
        if(s[i]==s[i+1])
        {
            d++;
        }
        else
        {
            continue;
        }
    }
    printf("%d",d);
    return 0;
}
