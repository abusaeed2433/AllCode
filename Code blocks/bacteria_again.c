#include<stdio.h>
int main()
{
    int n,bact=0,i,w,z,x;
    scanf("%d",&n);
    label1:
    for(i=0;i<=30;i++)
    {
        if(n<=0)
            return 0;
        else
        {
            x=pow(2,i);
        if(x==n)
        {
            bact++;
            printf("%d",bact);
        }
        else if(x>n)
        {
            bact++;
            z=i-1;
            w=pow(2,z);
            n=n-w;
            goto label1;
            continue;
        }
        else
            continue;
        }

    }
    return 0;
}
