#include<stdio.h>
int main()
{
    int t,n,i,j,s;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        s=1;
        scanf("%d",&n);
        for(j=2;j<n;j=2*j)
        {
            s+=j;
            if(n%s==0)
            {
                printf("%d\n",n/s);
                break;
            }
            else
            {
                continue;
            }
        }
    }
    return 0;
}
