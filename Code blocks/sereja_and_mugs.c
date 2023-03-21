#include<stdio.h>
int main()
{
    int n,m,i,j;
    scanf("%d%d",&n,&m);
    int a[n];
    int z=0;
//taking input in array//
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
//sorting in ascending order for maximum value//
    int e;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]<=a[j+1])
            {
                continue;
            }
            else
            {
                e=a[j];
                a[j]=a[j+1];
                a[j+1]=e;
            }
        }
    }
//finding sum of all number except the large one. n-1 friends//
    int sum=0;
    for(i=0;i<n-1;i++)
    {
        sum+=a[i];
    }
//checking condition and printing output//
    if(sum<=m)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
