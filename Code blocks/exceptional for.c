#include<stdio.h>
int main()
{
    int a;
    a=5;
    for(;;)
    {
        printf("%d\n",a);
        a=a+1;
        if(a>20)
            break;
    }
    return 0;
}
