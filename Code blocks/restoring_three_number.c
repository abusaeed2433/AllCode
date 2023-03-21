#include<stdio.h>
int main()
{
    int a[4],b,j,c,i,w,x,y;
    for(i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        for(j=i+1;j<4;j++)
        {
            if(a[i]>a[j])
            {
                b=a[i];
                a[i]=a[j];
                a[j]=b;
            }
        }

    }
    w=a[3]-a[0];
    x=a[3]-a[1];
    y=a[3]-a[2];
        printf("%d %d %d",w,x,y);
}
