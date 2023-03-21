#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,n,j,z[100];
    char a[101],b[101],c[101];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%s%s%s",a,b,c);
        n=strlen(a);
        z[i]=0;
        for(j=0;j<n;j++)
        {
            if(c[j]==a[j]||c[j]==b[j])
            {
                z[i]=1;
            }
            else
            {
                z[i]=0;
                break;
            }
        }
    }
    for(i=0;i<t;i++)
    {
        if(z[i]==1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
