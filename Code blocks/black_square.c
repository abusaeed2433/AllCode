#include<stdio.h>
int main()
{
    char n[100000];
    int a[4],x,b,i,j,y=0,z=0,yy=0,zz=0;
    for(i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%s",&n);
    x=strlen(n);
    for(j=0;j<x;j++)
    {
        if(n[j]=='1')
        {
            y++;
        }
        else if(n[j]=='2')
        {
            z++;
        }
        else if(n[j]=='3')
        {
            yy++;
        }
        else
        {
            zz++;
        }
//        printf("%c",n[j]);
    }
    printf("%d",(y*a[0]+z*a[1]+yy*a[2]+zz*a[3]));
}
