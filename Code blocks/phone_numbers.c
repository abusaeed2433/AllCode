#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",s);
    int e=0;
    for(i=0;i<n;i++)
    {
        if(s[i]=='8')
        {
            e++;
        }
        else
        {
            continue;
        }
    }
    if(n<11||e==0)
    {
        printf("0");
    }
    else
    {
        if(e>=(n/11))
        {
            printf("%d",(n/11));
        }
        else
        {
            printf("%d",e);
        }
    }
    return 0;
}
