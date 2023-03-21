#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==0)
    {
        int c=n/2;
        if(c%2==0||c%3==0)
        {
            printf("%d %d",c,c);
        }
        else
        {
            printf("%d %d",(c-1),(c+1));
        }
    }
    else if(n%3==0&&n%2!=0)
    {
        int c=n/3;
        printf("6 %d",(n-6));
    }
    else if(n%3==2&&n%2!=0)
    {
        printf("8 %d",(n-8));
    }
    else if(n%3==1&&n%2!=0)
    {
        printf("4 %d",(n-4));
    }
}
