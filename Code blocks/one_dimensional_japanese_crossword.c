#include<stdio.h>
int main()
{
    int t,a,b,i,j=0,d[100],count=0;
    char s[100];
    scanf("%d",&t);
    scanf("%s",&s);
    for(j=0;j<100;j++)
    {
        d[j]=0;
    }
    if(s[0]=='B')
    {
        for(i=0;i<t;i++)
        {
            if(s[0]==s[i])
            {
                d[j]++;
            }
            else
            {
                s[0]=='W';
                j++;
            }
        }
    }
    else if(s[0]=='W')
    {
        for(i=0;i<t;i++)
        {
            if(s[0]==s[i])
            {
                d[j]++;
            }
            else
            {
                s[0]=='B';
                j++;
            }
        }
    }
    if(s[0]=="B")
    {
        printf("%d\n",j-1);
    }
    else if(s[0]=='W')
    {
        if(j=2)
        {
            printf("1");
        }
        else
        {
        printf("%d\n",j-2);
        }

    }
}
