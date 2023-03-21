#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    if(n%2==0)
    {
        if(n%4==0)
        {
            printf("%d %d",(n/2)-1,(n/2)+1);
        }
        else
        {
            printf("%d %d",(n/2)-2,(n/2)+2);
        }
    }
    else
    {
        printf("%d %d",(n/2),(n/2)+1);
    }
    return 0;
}
