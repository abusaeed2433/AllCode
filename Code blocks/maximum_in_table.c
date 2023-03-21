#include<stdio.h>
int main()
{
    int n,i,j;
    long long int g=1;
    scanf("%d",&n);
    for(i=(2*n)-2;i>(n-1);i--)
    {
        g=g*i;
    }
    int h=1;
    for(i=1;i<=(n-1);i++)
    {
        h=h*i;
    }
    printf("%d",(g/h));
    return 0;
}
