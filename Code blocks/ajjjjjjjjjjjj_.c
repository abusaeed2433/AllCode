#include<stdio.h>
#include<math.h>
int main()
{
    int a=12345,b,i,c=0;
    int n=5;
    i=n-1;
    while(a)
    {
        b=a%10;
        c=c+b*pow(10,i);
        i=i-1;
        a=a/10;
    }
    printf("%d",c);
}
