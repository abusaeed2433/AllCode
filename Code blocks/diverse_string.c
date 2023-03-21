#include<stdio.h>
#include<string.h>
int main()
{
    int t,x,y,i,j,k;
    char s[101];
    scanf("%d",&t);
    int z[t];
    for(i=0;i<t;i++)
    {
        scanf("%s",s);
        x=strlen(s);
        //sorting from a to z//
        for(j=0;j<x;j++)
        {
            for(k=0;k<x-1;k++)
            {
                if(s[k]<s[k+1])
                {
                    continue;
                }
                else
                {
                    char p=s[k];
                    s[k]=s[k+1];
                    s[k+1]=p;
                }
            }
        }
        //calculating if all letters are distinct//
        z[i]=0;
        for(j=0;j<x-1;j++)
            {
                if(((int)s[j+1]-(int)s[j])==1)
                {
                    z[i]=0;
                }
                else
                {
                    z[i]=1;
                    break;
                }
            }
    }
    for(i=0;i<t;i++)
    {
        if(z[i]==1)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
    return 0;
}
