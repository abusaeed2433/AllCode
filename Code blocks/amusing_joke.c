#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,z;
    char a[101],b[101],c[101],s[202];
    scanf("%s%s%s",a,b,c);
    /*adding two string a &b */
    strcat(a,b);
    z=strlen(c);
    for(i=0;i<z;i++)
    {
        //sorting string a//
        for(j=0;j<(z-1);j++)
        {
            if(a[j]<=a[j+1])
            {
                continue;
            }
            else
            {
                int p=a[j];
                a[j]=a[j+1];
                a[j+1]=p;
            }
        }
        //sorting string c//
        for(j=0;j<(z-1);j++)
        {
            if(c[j]<=c[j+1])
            {
                continue;
            }
            else
            {
                int p=c[j];
                c[j]=c[j+1];
                c[j+1]=p;
            }
        }
    }
    int d=strcmp(a,c);
    if(d==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
