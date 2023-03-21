#include<stdio.h>
int main()
{
    int w,a,b;
    scanf("%d",&w);
    if(w!=2&&w>=1&&w<=100&&w%2==0)
        printf("YES");
    else
        printf("NO");
        return 0;
}
