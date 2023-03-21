#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=0;;i++)
    {
        if(i%2==1)
        {
            a=a-i;
            if(b>=(i+1))
            {
                continue;
            }
            else
            {
                printf("Valera");
                break;
            }
        }
        else
        {
            b=b-i;
            if(a>=(i+1))
            {
                continue;
            }
            else
            {
                printf("Vladik");
                break;
            }
        }
    }
    return 0;
}
