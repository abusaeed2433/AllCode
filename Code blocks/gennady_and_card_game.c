#include<stdio.h>
int main()
{
    char a[3],b[3],z;
    int i,x=0,y;
    scanf("%s",&a);
    for(i=0;i<5;i++)
    {
        scanf("%s",&b);
        if(b[0]==a[0]||b[1]==a[1])
        {
            x=1;
        }
        else
        {
            continue;
        }
    }
    if(x==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
