#include<stdio.h>
int main()
{
    int n,m,i,j,k,z,pm;
    scanf("%d%d",&n,&m);
    for(i=n+1;i<50;i++)
    {
        z=1;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                z=0;
                break;
            }
            else
            {
                continue;
            }
        }
        if(z==1)
        {
            pm=i;
            break;
        }
        else
        {
            continue;
        }
    }
    if(pm==m)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
