#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Your value=");
    scanf("%d",&a);
    c=0;
    for(d=1;d<=10;d++)
    {
        c=a+c;
        printf("%d x %d = %d\n",a,d,c);
    }
    return 0;
}
