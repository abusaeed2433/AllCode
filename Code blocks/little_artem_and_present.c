#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n<3&&n!=0)
    {
        printf("1");
    }
    else if(n==0)
    {
        printf("0");
    }
    else if(n>=3&&n%3==0)
    {
        printf("%d",(2*n)/3);
    }
    else if(n>=3&&n%3!=0)
    {
        printf("%d",(2*(n/3))+1);
    }
    return 0;
}
