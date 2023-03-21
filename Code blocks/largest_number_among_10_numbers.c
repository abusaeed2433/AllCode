#include<stdio.h>
int main()
{
    int a[5];
    int i,j,temp;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(a[j]>=a[j+1])
            {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            }
            else
            {
                continue;
            }
        }
    }
    for(i=0;i<=4;i++)
    {
        printf("%d",a[i]);
        if(i==4)
            continue;
        else
        printf(">");
    }
}
