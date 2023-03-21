#include<stdio.h>
int main()
{
    int k,r,i,d,l,m,a=0;
    scanf("%d%d",&k,&r);
    d=k%10;
    if(d==r)
    {
        printf("1");
    }
    else if(d!=r)
    {
        if(k%10==0)
        {
            printf("1");
        }
        else if(k%5==0)
        {
            printf("2");
        }
        else
        {

            for(i=1;i<=9;i++)
        {
            l=k*i;
            m=l%10;
            a++;
            if(m==r)
            {
                //printf("%d\n%d\n",l,m);
                printf("%d",a);
                break;
            }
        }

    }

    }
    return 0;
}

