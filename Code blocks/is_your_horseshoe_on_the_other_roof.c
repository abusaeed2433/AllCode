#include<stdio.h>
int main()
{
    int a[4],i,j,z=1;
    for(i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(a[i]==a[j])
            {
                z++;
            }
            else
            {
                continue;
            }
        }
    }
    if(z==5)
    {
        printf("0");
    }
    else if(z==7)
    {
        printf("1");
    }
    else if(z==9||z==11)
    {
        printf("2");
    }
    else if(z==17)
    {
        printf("3");
    }
    return 0;
}
