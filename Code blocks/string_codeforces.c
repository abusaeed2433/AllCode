#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000],b;
    int i,x;
    scanf("%s",&a);
    b=a[0]-32;
    x=strlen(a);
    if(a[0]>='A'&&a[0]<='Z')
    {
        for(i=0;i<x;i++)
        printf("%c",a[i]);
    }
    else
    {
        printf("%c",b);
        for(i=1;i<x;i++)
        printf("%c",a[i]);
    }
}
