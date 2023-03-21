#include<stdio.h>
int main()
{
    int num,a,b,sum=0;
    scanf("%d",&num);
    for(a;a!=0;a=a/10)
    {
        b=num%10;
        sum=(sum+b)*10;
        if(a==0)
            break;
    }
            printf("%d",sum);
}
