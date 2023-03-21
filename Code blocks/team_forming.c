#include<stdio.h>
int main()
{
    int t,a[100],b,i,j,sum;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<(t-1);i++)
    {
        for(j=0;j<(t-1);j++)
        {
            if(a[j]<a[j+1])
            {
                continue;
            }
            else
            {
                b=a[j];
                a[j]=a[j+1];
                a[j+1]=b;
            }
        }

    }
    for(i=0;i<t;i=i+2)
    {
        sum=sum+a[i+1]-a[i];
    }
    printf("%d",sum);
    return 0;
}
