#include<stdio.h>
int main()
{
    int a,b,c,d,e,z;
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b&&a>=c)
    {
        e=b+c;
        z=0;
        label:
        if(e>a)
        {
            printf("%d",z);
        }
        else
        {
            e++;
            z++;
            goto label;
        }
    }
    else if(b>=a&&b>=c)
    {
        e=a+c;
        z=0;
        label1:
        if(e>b)
        {
            printf("%d",z);
        }
        else
        {
            e++;
            z++;
            goto label1;
        }
    }
    else if(c>=a&&c>=b)
    {
        e=b+a;
        z=0;
        label2:
        if(e>c)
        {
            printf("%d",z);
        }
        else
        {
            e++;
            z++;
            goto label2;
        }
    }
}
