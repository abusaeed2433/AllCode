#include<stdio.h>
int main()
{
    char a[100],b,c;
    int i,x,w;
    scanf("%s",&a);
    x=strlen(a);
    for(i=0;i<x;i++)
    {
        if(a[i]<='z'&&a[i]>='a')
        {
            if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='y')
                w=i;
            else
                printf(".%c",a[i]);
        }
        else
        {
            if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='Y')
                        w=i;
            else
            {
                c=a[i]+32;
                printf(".%c",c);
            }
        }



    }
}
