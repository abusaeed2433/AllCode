#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j,b,x,y[100],e[100],z[100],w[100],p[100];
    char a[101];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%s",&a);
        x=strlen(a);
        y[i]=0;
        z[i]=0;
        w[i]=0;
        p[i]=0;
        if(a[0]=='0')
        {
            w[i]++;
            for(j=1;j<x;j++)
            {
                if(a[0+j]=='0')
                {
                    w[i]++;
                }
                else
                {
                    break;
                }
            }
        }
        for(j=x;j>=0;j--)
        {
            if(a[j]=='0')
            {
                e[i]=0;
            }
            else if(a[j]=='1')
            {
                e[i]=j;
                break;
            }
        }
        for(j=e[i]-1;j>=0;j--)
        {
            if(a[j]=='0')
            {
                p[i]++;
            }
            else
            {
                continue;
            }
        }
    }
    for(i=0;i<t;i++)
    {
        if(p[i]==0)
        {
            printf("0\n");
        }
        else
        {
            printf("%d\n",p[i]-w[i]);
        }
    }
}