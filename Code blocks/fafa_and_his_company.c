#include<stdio.h>
int main()
{
    int n,i,j,x=1,c;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        c=n-i;
        if(c%i==0)
        {
            x++;
        }
        else
        {
            continue;
        }
    }
    printf("%d",x);
}
