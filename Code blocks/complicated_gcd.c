#include<stdio.h>
#include<string.h>
int main()
{
    char a[102],b[102];
    int d;
    scanf("%s%s",a,b);
    d=strcmp(a,b);
    if(d==0)
    {
        printf("%s",a);
    }
    else
    {
        printf("1");
    }
    return 0;
}
