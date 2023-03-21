#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,x,z=0;
    char s[100],c;
    scanf("%s",&s);
    x=strlen(s);
    c='a';
    for(i=0;i<x;i++)
    {
        if((int)s[i]<=(int)c)
        {
        if(((int)c-(int)s[i])<=(26-(int)c+(int)s[i]))
        {
            z=z-(int)s[i]+(int)c;
        }
        else
        {
            z=z+26+(int)s[i]-(int)c;
        }
        }
        else
        {
        if(((int)s[i]-(int)c)<=(26-(int)s[i]+(int)c))
        {
            z=z+(int)s[i]-(int)c;
        }
        else
        {
            z=z+26-(int)s[i]+(int)c;
        }
        }
        c=s[i];
    }
    printf("%d",z);
    return 0;
}
