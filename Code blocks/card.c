#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",s);
    int a=0,b=0;
    for(i=0;i<n;i++)
    {
        if(s[i]=='n')
        {
            a++;
        }
        else if(s[i]=='z')
        {
            b++;
        }
        else
        {
            continue;
        }
    }
    for(i=0;i<a;i++)
    {
        printf("1 ");
    }
    for(i=0;i<b;i++)
    {
        printf("0 ");
    }
    return 0;
}
