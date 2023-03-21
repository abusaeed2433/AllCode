#include<stdio.h>
#include<string.h>
int main()
{
    char a[27],b[27],c[1001];
    int i,j,x;
    scanf("%s%s%s",a,b,c);
    x=strlen(c);
    for(i=0;i<x;i++)
    {
        int z=0;
        for(j=0;j<=26;j++)
        {
            if(c[i]==a[j])
            {
                z=1;
                printf("%c",b[j]);
                break;
            }
            else if(c[i]==a[j]-32)
            {
                z=1;
                printf("%c",b[j]-32);
                break;
            }
            else
            {
                continue;
            }
        }
        if(z==0)
        {
            printf("%c",c[i]);
        }
    }
}
