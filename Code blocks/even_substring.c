#include<stdio.h>
int main()
{
    int t,n,i,j,x=0;
    char s[65000];
    scanf("%d",&t);
    scanf("%s",&s);
    for(i=0;i<t;i++)
    {
        for(j=i;j<t;j++)
        {
            if(s[j]%2==0)
            {
                x++;
            }
            else
            {
                continue;
            }
        }
    }
    printf("%d",x);
    return 0;
}
