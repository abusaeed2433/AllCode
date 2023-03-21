#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",s);
    int a=0,b=0;
    for(i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            a++;
        }
        else if(s[i]=='1')
        {
            b++;
        }
    }
    if(n==1||a!=b)
    {
        printf("1\n%s",s);
    }
    else
    {
        printf("2\n");
    int g=0,h=0;
    for(i=0;i<n;i++)
    {
        printf("%c",s[i]);
        if(s[i]=='1')
        {
            g++;
        }
        else
        {
            h++;
        }
        if(g!=h&&(b-g)!=(a-h))
        {
            printf(" ");
            for(j=(g+h);j<n;j++)
            {
                printf("%c",s[j]);
            }
            break;
        }
    }
    }
    return 0;
}
