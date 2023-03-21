#include<stdio.h>
int main()
{
    int n,a,i,b[100];
    scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a);
    if(a==2)
    {
        b[i]=2;
    }
    else
    {
        if(a%2==0)
        {
            b[i]=0;
        }
        else
        {
            b[i]=1;
        }
    }
}
for(i=0;i<n;i++)
{
    printf("%d\n",b[i]);
}
    return 0;
}
