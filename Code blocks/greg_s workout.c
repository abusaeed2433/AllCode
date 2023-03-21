#include<stdio.h>
int main()
{
    int n,i,j,x=0,y=0,z=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%3==0)
        {
            x=x+a[i];
        }
        else if(i%3==1)
        {
            y=y+a[i];
        }
        else if(i%3==2)
        {
            z=z+a[i];
        }
    }
    if(x>y&&x>z)
    {
        printf("chest");
    }
    else if(y>x&&y>z)
    {
        printf("biceps");
    }
    else
    {
        printf("back");
    }
    return 0;
}
