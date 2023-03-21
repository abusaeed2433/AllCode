#include<stdio.h>
int main()
{
    int t,i,j,k;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
    }
    int m,e;
    if(a[0]>=a[1])
    {
        m=a[0];
        e=a[1];
    }
    else
    {
        m=a[1];
        e=a[0];
    }
    int x=1;
    for(i=2;i<t;i++)
    {
        if(a[i]>m)
        {
            m=a[i];
            x++;
        }
        if(a[i]<e)
        {
            e=a[i];
            x++;
        }
    }
    if(t==1||a[0]==a[1])
    {
        printf("%d",x-1);
    }
    else
    {
        printf("%d",x);
    }
    return 0;
}
