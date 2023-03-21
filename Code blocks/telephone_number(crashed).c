#include<stdio.h>
int main()
{
    int t,n,a,b,i,j,d[100],c[100],f[100];
    char s[100];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        scanf("%s",&s);
        d[i]=n;
        f[i]=0;
        for(j=0;j<n;j++)
        {
            if(s[j]=='8')
            {
                c[i]=j;
                break;
            }
            else
            {
                f[i]++;
            }
        }
    }
    for(i=0;i<t;i++)
    {
        if((d[i]-c[i])>=11&&f[i]!=d[i])
        {
            printf("YES\n");
        }
        else if((d[i]-c[i])<11||f[i]==d[i])
        {
            printf("NO\n");
        }
    }
    return 0;
}
