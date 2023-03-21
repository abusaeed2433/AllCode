#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    int a,b,i,j,k,z=0,x;
    scanf(" %s",&s);
    x=strlen(s);
    for(i=0;i<x-2;i++)
    {
        if(s[i]=='Q')
        {
            for(j=i+1;j<x-1;j++)
            {
                if(s[j]=='A')
                {
                    for(k=j+1;k<x;k++)
                    {
                        if(s[k]=='Q')
                        {
                            z++;
                        }
                        else
                        {
                            continue;
                        }
                    }
                }
                else
                {
                    continue;
                }
            }
        }
        else
        {
            continue;
        }
    }
    printf("%d",z);
    return 0;
}
