#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j,k,w,c;
    scanf("%d",&t);
    int n[t+1],a[t+1],b[t+1];
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d",&n[i],&a[i],&b[i]);
    }
    for(i=0;i<t;i++)
    {
        w=0;
        c=b[i];
        for(j=0;j<n[i];j++)
        {
            for(k=97;k<(97+c);k++)
            {
                w++;
                if(w>n[i])
                {
                    break;
                }
                else
                {
                    printf("%c",k);
                }
            }
            if(w>n[i])
            {
                break;
            }
            else
            {
                j=w-1;
            }
        }
        printf("\n");
    }
    return 0;
}
