#include<stdio.h>
int main()
{
    int t,a,b,c,r,i,j;
    scanf("%d",&t);
    int x[t];
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d%d",&a,&b,&c,&r);
        if(a==b)
        {
//            if(a>=(c-r)||a<=(c+r))
//            {
//                x[i]=0;
//            }
//            else
//            {
                x[i]=b-a;
//            }
        }
        else if(a<b)
        {
            if(c<a)
            {
                if((c+r)>a&&(c+r)<b)
                {
                    x[i]=b-(c+r);
                }
                else
                {
                    x[i]=b-a;
                }
            }
            else if(c>=a&&c<=b)
            {
                if((c+r)<=b)
                {
                    if((c-r)>=a)
                    {
                        x[i]=(b-a)-2*r;
                    }
                    else
                    {
                        x[i]=b-(c+r);
                    }
                }
                else
                {
                    if((c-r)>=a)
                    {
                        x[i]=(c-r)-a;
                    }
                    else
                    {
                        x[i]=0;
                    }
                }
            }
            else
            {
                if((c-r)<b&&(c-r)>a)
                {
                    x[i]=(c-r)-a;
                }
                else
                {
                    x[i]=b-a;
                }
            }
        }
        else
        {
            if(c<b)
            {
                if((c+r)>b&&(c+r)<a)
                {
                    x[i]=a-(c+r);
                }
                else
                {
                    x[i]=a-b;
                }
            }
            else if(c>=b&&c<=a)
            {
                if((c+r)<=a)
                {
                    if((c-r)>=b)
                    {
                        x[i]=(a-b)-2*r;
                    }
                    else
                    {
                        x[i]=a-(c+r);
                    }
                }
                else
                {
                    if((c-r)>=b)
                    {
                        x[i]=(c-r)-b;
                    }
                    else
                    {
                        x[i]=0;
                    }
                }
            }
            else
            {
                if((c-r)<=a&&(c-r)>=b)
                {
                    x[i]=(c-r)-b;
                }
                else if((c-r)<=a&&(c-r)<=b)
                {
                    x[i]=0;
                }
                else
                {
                    x[i]=a-b;
                }
            }
        }
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",x[i]);
    }
    return 0;
}
