#include<stdio.h>
int main()
{
    int i,n,x=0;
    char a[13];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&a);
        if(a[0]=='T')
                x=x+4;
        else if(a[0]=='C')
                x=x+6;
        else if(a[0]=='O')
                x=x+8;
        else if(a[0]=='D')
                x=x+12;
        else if(a[0]=='I')
                x=x+20;
    }
    printf("%d",x);
}
