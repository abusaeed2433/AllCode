#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,t;
    scanf("%d",&t);
    char s[t+1];
    scanf("%s",s);
    int x=0,y=0;
    for(i=0;i<t;i++)
    {
        if(s[i]=='a')
        {
            x++;
        }
        else
        {
            y++;
        }
    }
    if(x==y)
    {
        printf("0\n%s",s);
    }
    else
    {
        if(x>y)
        {
            printf("%d\n",(x/2));
        }
        else
        {
            printf("%d\n",(y/2));
        }
        for(i=0;i<t/2;i++)
        {
            printf("ab");
        }

    }
}
