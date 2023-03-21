#include<stdio.h>
int main()
{
    int n,i,j,k,a[4];
    scanf("%d",&n);
    for(i=n+1;;i++)
    {
        a[0]=i%10;
        a[1]=(i/10)%10;
        a[2]=(i/100)%10;
        a[3]=(i/1000)%10;
        int p=0;
        for(j=0;j<4;j++)
        {
            for(k=0;k<4;k++)
            {
                if(a[j]==a[k]&&j!=k)
                {
                    p=1;
                }
                else
                {
                    p=0;
                }
                if(p==1)
                {
                    break;
                }
            }
            if(p==1)
            {
                break;
            }
        }
        if(p==1)
        {
            continue;
        }
        else
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}
