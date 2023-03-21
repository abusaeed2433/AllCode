#include<stdio.h>

int main()
{
    int n,i,j,x;
    scanf("%d",&n);

    if(n==1)
        printf("1");
    for(i=1;i<=(n/2)+1;i=i+2)
    {
        printf("%d ",i);
        x=1;
        for(j=1;j<=2;j++)
        {
            x=x+i;
            if(x>n)
                break;
            printf("%d ",x);
        }
        printf("\n");
    }
}
