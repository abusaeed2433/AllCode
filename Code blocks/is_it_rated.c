#include<stdio.h>
int main()
{
    int t,i,j,x=0;
    scanf("%d",&t);
    int a[t],b[t];
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
        if(a[i]==b[i])
        {
            continue;
        }
        else
        {
            x=2;
        }
    }
    if(x==2)
    {
        printf("rated");
    }
    else
    {
        int y=0;
        for(i=0;i<t-1;i++)
        {
            if(a[i]>=a[i+1])
            {
                continue;
            }
            else
            {
                y=1;
                break;
            }
        }
        if(y==1)
        {
            printf("unrated");
        }
        else
        {
            printf("maybe");
        }
    }
    return 0;
}
