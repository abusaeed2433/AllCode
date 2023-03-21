#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l,t;
    scanf("%d",&t);
    int n[102],k[102];
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&n[i],&k[i]);
    }
    int y=0;
    for(i=0;i<t;i++)
    {
        for(j=0;j<n[i];j++)
        {
            int x=0;
            for(l='a';l<(k[i]+'a');l++)
            {
                y++;
                x++;
                printf("%c",l);
                if(y==n[i])
                {
                    break;
                }
            }
                j=j+x-1;
        }
        printf("\n");
    }
    return 0;
}
