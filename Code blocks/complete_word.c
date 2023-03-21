#include<stdio.h>
int main()
{
    int a,c,t,n,i,j,k,l,x,q,d[100000];
    char s[1000000];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%s",&n,&k,&s);
        c=n/k;
        x=0;
        for(l=0;l<k;l++)
        {
            if(l>0)
            {
                for(j=(l+1)*k;j>=0;j--)
                {
                    if(s[j]==s[j+1-2*k])
                    {
                        continue;
                    }
                    else
                    {
                        x++;
                    }
                }
            }
            for(j=l*k;j<(l+1)*k;j++)
            {
                if(s[j]==s[j+k])
                {
                    continue;
                }
                else
                {
                    x++;
                }
            }
            q=x;
        }
        d[i]=x;
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",d[i]);
    }
    return 0;
}
