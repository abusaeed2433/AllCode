#include<stdio.h>
int main()
{
    printf("problem:https://codeforces.com/problemset/problem/546/A");
    int a,b,m,n,s,t,u,v,w;
    printf("\nNumber of banana=");
    scanf("%d",&n);
    printf("\nAmount of money=");
    scanf("%d",&m);
    printf("\nPrice of first banana=");
    scanf("%d",&b);
    a=n*(n+1);
    s=a/2;
    t=s*b;
    if(m>=t)
    {
        printf("\nTotal price=%d\nYou donot have to borrow money.",t);
    }
    else
    {
        u=t-m;
        printf("\nTotal price=%d taka\nYou have %d taka.\nYou have to borrow %d taka.\n",t,m,u);
    }
return 0;
}
