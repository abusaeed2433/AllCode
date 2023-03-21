#include<stdio.h>
int main()
{
    int t,n,i,j;
    char s[100];
    scanf("%d",&t);
    int x[t];
    for(i=0;i<t;i++)
    {
        scanf("%d%s",&n,&s);
        for(j=0;j<n;j++)
        {
            if(s[j]=='A')
            {
                int z=0,y=0,k;
                for(k=j+1;k<n;k++)
                {
                    if(s[k]=='P')
                    {
                        z++;
                    }
                    else
                    {
                        if(y>z)
                        {
                            z=0;
                        }
                        else
                        {
                            y=z;
                            z=0;
                        }
                    }
                }
                if(y>=z)
                {
                    x[i]=y;
                }
                else
                {
                    x[i]=z;
                }
                break;
            }
            else
            {
                x[i]=0;
            }
        }
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",x[i]);
    }
    return 0;
}
