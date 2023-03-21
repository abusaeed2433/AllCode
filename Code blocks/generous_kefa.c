#include<stdio.h>
int main()
{
    int t,n,i,j;
    scanf("%d%d",&t,&n);
    char s[t+1];
    int x[n];
    scanf("%s",s);
    int k=0;
    for(i=97;i<97+n;i++)
    {
        x[k]=0;
        for(j=0;j<t;j++)
        {
            if(i==(int)s[j])
            {
                x[k]++;
            }
            else
            {
                continue;
            }
        }
        k++;
    }
    int z=0;
    if(t%n==0)
    {
        for(i=0;i<n;i++)
        {
            if(x[i]>=n)
            {
                continue;
            }
            else
            {
                z=1;
                break;
            }
        }
        if(z==1)
        {
            printf("NO");
        }
        else
        {
            printf("YES");
        }
    }
    else
    {
        printf("NO");
    }
}
