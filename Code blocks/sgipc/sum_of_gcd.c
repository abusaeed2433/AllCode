#include<stdio.h>
int main()
{
    int k,i,j,l,m,st;
    scanf("%d",&k);
    int u=0;
    for(i=1;i<=k;i++)
    {
        for(j=1;j<=k;j++)
        {
            for(l=1;l<=k;l++)
            {
                st=i<j?(i<l?i:l):(j<l?j:l);
                for (m=st;m>=1;m--)
                {
                    if (i%m==0&&j%m==0&&l%m==0)
                    {
                        u=u+m;
                        break;
                    }
                }
            }
        }
    }

    printf("%d",u);

}
