#include<stdio.h>
int main()
{
    char a[]={'a','b','v','d','f','f','t','s','j','d','/0'};
    int i,j=0;
    i=0;
    while(a[i]!='\0')
    {
        j++;
    }
    printf("%d",j);
    return 0;
}
