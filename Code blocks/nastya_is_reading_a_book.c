#include<stdio.h>
int main()
{
    int t,a[100],b[100],c,i,j,n,x;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
    }
    scanf("%d",&n);
    for(j=0;j<t;j++)
    {
        if(n>=a[j]&&n<=b[j])
        {
            x=j;
            break;
        }
        else
        {
            continue;
        }
    }
    printf("%d",(t-j));
    return 0;
}
