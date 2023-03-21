#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g;
    scanf("%d%d%d%d%d",&a,&b,&d,&c,&e);
    f=(a*b)+2*c;
    g=(a*d)+2*e;
    if(f>g)
    {
        printf("Second");
    }
    else if(g>f)
    {
        printf("First");
    }
    else
    {
        printf("Friendship");
    }
    return 0;
}
