#include<stdio.h>
int main()
{
    int t,i,x=0;
    char s[55];
    scanf("%d",&t);
    scanf("%s",&s);
    for(i=0;i<t;i=i+x)
    {
        printf("%c",s[i]);
        x++;
    }
}
