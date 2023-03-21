#include<stdio.h>
int main()
{
    int t,i,j,k;
    scanf("%d",&t);
    int a[t],x=0;
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            continue;
        }
        else
        {
            x++;
        }
    }
    if(x==0)
    {
        printf("%d",t);
    }
    else if(x%2==0&&x!=0)
    {
        printf("%d",(t-x));
    }
    else
    {
        printf("%d",x);
    }
    return 0;
}
