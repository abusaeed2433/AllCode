#include<stdio.h>
int main()
{
    int n,a,i,j,x=0,y=1000000000,z;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(x>a)
        {
            z=1;
        }
        else
        {
            x=a;
        }
        if(y<a)
        {
            z=1;
        }
        else
        {
            y=a;
        }
    }
    printf("%d",(x+1-y-n));
    return 0;
}
