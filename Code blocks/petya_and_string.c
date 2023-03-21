#include<stdio.h>
#include<string.h>
int main()
{
    int x,i,z,c,d;
    char s[101],s1[101];
    scanf("%s%s",s,s1);
    x=strlen(s);
    for(i=0;i<x;i++)
    {
        c=(int)s[i];
        d=(int)s1[i];
        if(c>=97&&d>=97)
        {
            if(c==d)
            {
                z=0;
            }
            else if(c>d)
            {
                z=1;
                break;
            }
            else if(d>c)
            {
                z=-1;
                break;
            }
        }
        //
        else if(c<97&&d<97)
        {
            if(c==d)
            {
                z=0;
            }
            else if(c>d)
            {
                z=1;
                break;
            }
            else if(d>c)
            {
                z=-1;
                break;
            }
        }
        if(c>=97&&d<97)
        {
            c=c-32;
            if(c==d)
            {
                z=0;
            }
            else if(c>d)
            {
                z=1;
                break;
            }
            else if(d>c)
            {
                z=-1;
                break;
            }
        }
        if(c<97&&d>=97)
        {
            d=d-32;
            if(c==d)
            {
                z=0;
            }
            else if(c>d)
            {
                z=1;
                break;
            }
            else if(d>c)
            {
                z=-1;
                break;
            }
        }
    }
    printf("%d",z);

    return 0;
}
