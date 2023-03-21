#include<stdio.h>
int main()
{
    long long int a,b,c,i,j,x,d;
    scanf("%lld%lld%lld",&a,&b,&c);
    if(a<=b&&a<=c)
    {
        x=4*a;
        b=b-a;
        c=c-a;
    if(b>c)
    {
        if(b>c&&b>0&&c>0)
        {
            x=x+(2*c)+1;
        }
        else if(b>c&&c>0&&b==0)
        {
            x=x+(2*c);
        }
        else if(b>c&&b>0&&c==0)
        {
            x=x+1;
        }
    }
    else if(b==c&&b!=0)
    {
        x=x+(2*c)+1;
    }
    else if(c>b)
    {
        if(b==0&&c>0)
        {
            x=x+2*c;
        }
        else if(c==0&&b>0)
        {
            x=x+1;
        }
        else if(b!=0&&c!=0)
        {
            x=x+(2*c)+1;
        }
    }
    else if(b==0&&c==0)
    {
        x=x;
    }

    }
    else if(b<=a&&b<=c)
    {
        x=4*b;
        a=a-b;
        c=c-b;
        if(a>c)
        {
            if(c!=0)
            {
                x=x+(2*c)+1;
            }
            else if(c==0)
            {
                x=x+1;
            }
        }
        else if(c>a)
        {
            if(a!=0)
            {
                x=x+(2*c)+1;
            }
            else if(a==0)
            {
                x=x+(2*c);
            }
        }
        else
        {
            if(a!=0)
            {
                x=x+(2*c)+1;
            }
            else
            {
                x=x;
            }
        }
    }
    else if(c<=a&&c<=b)
    {
        x=4*c;
        a=a-c;
        b=b-c;
        if(a>b)
        {
            if(a>b&&b!=0)
            {
                x=x+(2*b)+1;
            }
            else if(a>b&&b==0)
            {
                x=x+1;
            }
        }
        else if(b>a)
        {
            if(a!=0)
            {
                x=x+(2*a)+1;
            }
            else if(a==0)
            {
                x=x+1;
            }
        }
        else
        {
            x=x+(2*a);
        }
    }
    printf("%lld",x);
    return 0;
}
