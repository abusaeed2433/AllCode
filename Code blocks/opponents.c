#include<stdio.h>
int main()
{
    int n,t,i,j;
    scanf("%d%d",&n,&t);
    int d[t];
    char c[n+1];
    for(i=0;i<t;i++)
    {
        d[i]=0;
        scanf("%s",&c);
        for(j=0;j<n;j++)
        {
            if(c[j]=='0')
            {
                d[i]=1;
                break;
            }
            else
            {
                d[i]=0;
            }
        }
    }
    int y=0,z=0;
    for(i=0;i<t;i++)
    {
        if(d[i]==1)
        {
            z++;
        }
        else
        {
             if(y<z)
            {
                y=z;
            }
            z=0;
        }
        if(y<z)
        {
            y=z;
        }
    }
    printf("%d",y);
}
