#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",s);
//if 1st character is +//
    if(s[0]=='+')
    {
        int x=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='+')
            {
                x++;
            }
            else
            {
                if(x==0)
                {
                    x=0;//x(number of stone can't be negative//
                }
                else
                {
                    x--;//x will decrease iff x>0//
                }
            }
        }
        printf("%d",x);
    }
//if 1st character is -//
    else
    {
        int x=0,w;
        for(i=0;i<n;i++)
        {
            if(s[i]=='-')
            {
                x++;
                w=i;
            }
            else
            {
                break;
            }
        }
        for(i=0;i<n;i++)
        {
            if(s[i]=='+')
            {
                x++;
            }
            else
            {
                if(x==0)
                {
                    x=0;
                }
                else
                {
                    x--;
                }
            }
        }
        printf("%d",x);
    }
    return 0;
}
