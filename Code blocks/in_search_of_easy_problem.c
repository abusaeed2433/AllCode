#include<stdio.h>
int main()
{
    int n,i,count,a[100];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]==0)
            count=0;
        else
            {
                count=1;
                break;
            }
    }
    if(count==0)
        printf("EASY");
    else
        printf("HARD");
}
