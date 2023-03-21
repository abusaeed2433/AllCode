#include<stdio.h>
#include<string.h>
int main()
{
    int i,n;
    char a[10],b[10],c[10];
    scanf("%s%s%s",a,b,c);
    int x,y,z;
    x=strlen(a);
    y=strlen(b);
    z=strlen(c);
    printf("length of %s = %d\nlength of %s = %d\nlength of %s = %d\n",a,x,b,y,c,z);
    printf("///////////\n\n");
    int d;
    d=strcmp(a,b);
    if(d==0)
    {
        printf("%s and %s are same so d=%d\n",a,b,d);
    }
    else
    {
        printf("%s and %s are different so d=%d[not 0]\n",a,b,d);
    }
    d=strcmp(b,c);
    if(d==0)
    {
        printf("%s and %s are same so d=%d\n",b,c,d);
    }
    else
    {
        printf("%s and %s are different so d=%d[not 0]\n",b,c,d);
    }
    printf("///////////\n\n");
    printf("%s ",strncat(a,b,1));
}
