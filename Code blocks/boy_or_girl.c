#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,x,z[100],c,d=0;;
    char n[100],s;
    scanf("%s",&n);
    x=strlen(n);
    for(i=0;i<=26;i++)
    {
        z[i]=-1;
        for(j=0;j<x;j++)
        {
            c=97+i;
            if(c==(int)n[j])
            {
                z[i]++;
            }
            else
            {
                continue;
            }
        }
    }
    for(i=0;i<26;i++)
    {
        if(z[i]>0)
        {
            d=d+z[i];
        }
        else
        {
            continue;
        }
    }
    d=x-d;
    if(d%2==0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }
    return 0;
}
