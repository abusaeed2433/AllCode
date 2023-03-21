#include<stdio.h>
int main()
{
    int t,i,n,x,a,b,c,d[100];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d%d",&n,&x,&a,&b);
        if(a>b)
        {
            c=a-b;
            if((n-a+b)>x)
            {
                d[i]=a-b+x;
            }
            else
            {
                d[i]=n-1;
            }
        }
        else if(b>a)
        {
            c=b-a;
            if((n-c)>x)
            {
                d[i]=b-a+x;
            }
            else
            {
                d[i]=n-1;
            }
        }
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",d[i]);
    }
    return 0;
}
