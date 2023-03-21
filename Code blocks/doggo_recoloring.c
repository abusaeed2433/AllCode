#include<stdio.h>
int main()
{
    int n,i,j,x=0;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",s);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(s[j]==s[j+1])
            {
                x=1;
                break;
            }
            else if(s[j]<s[j+1])
            {
                continue;
            }
            else
            {
                s[j]=s[j]+s[j+1];
                s[j+1]=s[j]-s[j+1];
                s[j]=s[j]-s[j+1];
            }
        }
    }
    if(n==1||x==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
