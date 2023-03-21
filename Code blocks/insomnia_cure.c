#include<stdio.h>
int main()
{
    int k,l,n,m,d,i,x=0;
    scanf("%d%d%d%d%d",&k,&l,&n,&m,&d);
    for(i=1;i<=d;i++)
    {
        if(i%k==0||i%l==0||i%n==0||i%m==0)
        {
            continue;
        }
        else
        {
            x++;
        }
    }
    printf("%d",(d-x));
}
