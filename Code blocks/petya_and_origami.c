#include<stdio.h>
int main()
{
    int n,k,i,a,x,y,z;
    scanf("%d%d",&n,&k);
    if((2*n)%k==0)
    {
        x=(2*n)/k;
        if((5*n)%k==0)
        {
            y=(5*n)/k;
            if((8*n)%k==0)
            {
                z=(8*n)/k;
            }
            else
            {
                z=((8*n)/k)+1;
            }
        }
        else
        {
            y=((5*n)/k)+1;
            if((8*n)%k==0)
            {
                z=(8*n)/k;
            }
            else
            {
                z=((8*n)/k)+1;
            }
        }
    }
    else
    {
        x=((2*n)/k)+1;
        if((5*n)%k==0)
        {
            y=(5*n)/k;
            if((8*n)%k==0)
            {
                z=(8*n)/k;
            }
            else
            {
                z=((8*n)/k)+1;
            }
        }
        else
        {
            y=((5*n)/k)+1;
            if((8*n)%k==0)
            {
                z=(8*n)/k;
            }
            else
            {
                z=((8*n)/k)+1;
            }
        }
    }
    printf("%d",x+y+z);
}