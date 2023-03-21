#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",s);
    int x=0,y=0;
    for(i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            x++;
        }
        else
        {
            y++;
        }
    }
    if(y==0)
    {
        printf("0");
    }
    else
    {
        printf("1");
        for(i=0;i<x;i++)
        {
            printf("0");
        }
    }
}
