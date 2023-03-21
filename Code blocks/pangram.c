#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,z=0;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",s);
    for(i=97;i<=122;i++)
    {
        z=0;
        for(j=0;j<n;j++)
        {
            if(i==(int)s[j]||i==((int)s[j])+32)
            {
                z=1;
                break;
            }
            else
            {
                continue;
            }
        }
        if(z==0)
        {
            printf("NO");
            break;
        }
    }
    if(z==1)
    {
        printf("YES");
    }
    return 0;
}
