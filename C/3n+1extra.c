#include<stdio.h>
int main()
{
    int i,j,n;
    while(scanf("%d %d",&i,&j)==2){
        printf("%d %d",i,j);
        int max=0;

        if (i>j)
        {
            int temp=j;
            j=i;
            i=temp;

        }
        int m;
        for(m=i;m<=j;m++)
        {
            int x=1;
            n=m;
            while (n!=1)
            {
                n= n%2 == 0? n/2 : 3*n+1;
                x++;
            }
            if(max<x)
                max=x;
        }
        printf(" %d\n",max);
    }
    return 0;
}
