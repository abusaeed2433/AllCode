#include<stdio.h>
int main()
{
    int i,x,c=0,d;
    char a[52];
    scanf("%s",&a);
    x=strlen(a);
    for(i=0;i<=x;i++)
    {
        if(a[i]=='a')
        {
            c++;
        }
    }
    d=x-c;
    if(c>d)
    {
        printf("%d",x);
    }
    else if(c==d)
    {
        printf("%d",(2*c-1));
    }
    else
    {
        printf("%d",(2*c-1));
    }
}
