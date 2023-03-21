#include<stdio.h>
#include<math.h>
int main()
{
    int n,f,i,j,s=0;
    scanf("%d%d",&n,&f);
    int z=0,x;
    x=n;
    if(f>=(n-1))
    {
        printf("%d",(n-1));
    }
    else
    {
        s=f;
        for(i=2;i<(2+n-f-1);i++)
        {
            s+=i;
        }
        printf("%d",s);
    }
    return 0;
}
