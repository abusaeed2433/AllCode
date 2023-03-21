#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n==1)
    {
        printf("9 8");
    }
    else if(n==2)
    {
        printf("6 4");
    }
    else if(n%2==0)
    {
        printf("%d %d",(2*n),n);
    }
    else
    {
        printf("%d %d",(3*n),(2*n));
    }
    return 0;
}
