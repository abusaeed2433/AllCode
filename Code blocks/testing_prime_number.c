#include<stdio.h>
int main()
{
    int a,i,j,z=0,k=0,x[10003];
    x[0]=2;
    for(i=3;i<1000000;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                z=0;
                break;
            }
            else
            {
                z=1;
            }
        }
        if(z==1)
        {
            k++;
            x[k]=i;
        }
        if(k==10002)
        {
            break;
        }
        else
        {
            continue;
        }
    }
    int t,e;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&e);
        printf("%d\n",x[e-1]);
    }
    return 0;
}
