#include<stdio.h>
int main()
{
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    if(n>m||n>k)
    {
        printf("No");
    }
    else
    {
        printf("Yes");
    }
    return 0;
}
