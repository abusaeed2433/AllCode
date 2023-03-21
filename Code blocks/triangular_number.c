#include<stdio.h>
int main()
{
    int n,i,a=0,z;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=a+i;
        if(a==n)
        {
            z=1;
            break;
        }
        else
        {
            z=2;
        }
    }
    if(z==1)
    {
        printf("YES");
    }
    else if(z==2)
    {
        printf("NO");
    }
    return 0;
}
