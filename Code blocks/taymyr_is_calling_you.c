#include<stdio.h>
int main()
{
    int a,b,c,i,l;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        for(i=a;i>0;i++)
        {
            if(i%a==0&&i%b==0)
            {
                l=i;
                break;
            }
            else
            {
                continue;
            }
        }
    }
    else if(b>a)
    {
        for(i=b;i>0;i++)
        {
            if(i%a==0&&i%b==0)
            {
                l=i;
                break;
            }
            else
            {
                continue;
            }
        }
    }
    else
    {
        l=a;
    }
    printf("%d",(c/l));
    return 0;
}
