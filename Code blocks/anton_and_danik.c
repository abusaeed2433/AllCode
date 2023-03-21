#include<stdio.h>
int main()
{
    int n,i,j,x=0,y=0;
    char a[100002];
    scanf("%d",&n);
    scanf("%s",&a);
    for(i=0;i<n;i++)
    {
        if(a[i]=='A')
        {
            x++;
        }
        else if(a[i]=='D')
        {
            y++;
        }
    }
    if(x>y)
    {
        printf("Anton");
    }
    else if(x<y)
    {
        printf("Danik");
    }
    else
    {
        printf("Friendship");
    }
    return 0;
}
