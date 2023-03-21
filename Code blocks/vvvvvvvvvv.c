#include<stdio.h>
int main()
{
    int a,b,c,d=0,e=0,n;
    scanf("%d",&a);
    b=a;
    while(b)
    {
        c=a-(b*10);
        if(c%2==0)
            d++;
        else
            e++;
            b=a/10;
    }
    printf("%d , %d",d,e);
}
