#include<stdio.h>
#include<stdio.h>
int main()
{
    char s[21];
    scanf("%s",s);
    printf("%d",26*(strlen(s)+1)-strlen(s));
    return 0;
}
