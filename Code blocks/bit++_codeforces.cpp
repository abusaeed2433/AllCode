#include<stdio.h>
#include<string.h>
int main()
{
    char a[4];

    int n,x=0,i;
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        gets(a);
        getchar();
        if(a[1] == '+')
            x++;
        else
            x--;
    }
    printf("%d\n", x);
    return 0;
}
