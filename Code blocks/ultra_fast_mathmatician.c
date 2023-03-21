#include<stdio.h>
#include<string.h>
int main()
{
    int i,x;
    char a[101],b[101];
    scanf("%s%s",a,b);
    x=strlen(a);
    for(i=0;i<x;i++)
    {
        if(a[i]==b[i])
        {
            printf("0");
        }
        else
        {
            printf("1");
        }
    }
    return 0;
}
