#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,x,y,z,count=0;
    scanf("%d",&n);
    for(i=0;i<=29;i++)
    {
        if(pow(2,i)==n)
            printf("1");
    }
    for(i=0;i<=29;i++)
    {
        x=pow(2,i);
        z=i+1;
        y=pow(2,z);
        if(x>n&&y<n)
        {
            printf("%d",i);
        }
    }

    printf("\n%d",n);
}
