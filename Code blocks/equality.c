#include<stdio.h>
#include<string.h>
int main()
{
    int n,k,i,j,p;
    scanf("%d%d",&n,&k);
    char s[n+2];
    int z[k],x[k];
    scanf("%s",s);
    for(i=0;i<k;i++)
    {
        z[i]=65+i;
        x[i]=0;
    }
    for(i=0;i<k;i++)
    {
        for(j=0;j<n;j++)
        {
            if((int)s[j]==z[i])
            {
                x[i]++;
            }
            else
            {
                continue;
            }
        }
    }
    for(i=0;i<k;i++)
    {
        for(j=0;j<(k-1);j++)
        {
            if(x[j]<=x[j+1])
            {
                continue;
            }
            else
            {
                p=x[j];
                x[j]=x[j+1];
                x[j+1]=p;
            }
        }
    }
    printf("%d",k*x[0]);
    return 0;
}
