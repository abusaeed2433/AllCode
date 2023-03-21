#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,x=0;
    char a[4];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&a);
        if(a[1]=='+')
        {
            x++;
        }
        else
        {
            x--;
        }
    }
    printf("%d\n", x);
}
