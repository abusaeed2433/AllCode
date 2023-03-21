
#include<stdio.h>

#define N 5000001
int phi[N];
unsigned long long ans[N];


void calculatePhi1ToN()
{
    for (int i = 2; i < N; i++) phi[i] = i;

    ans[1] = 0;
    for(int i=2; i<N; i++)
    {
        if(phi[i]==i) //i is prime
        {
            for(int j=i; j<N; j+=i) //subtracting from all multiple of i
            {
                phi[j] -= phi[j] / i;
            }
        }
        ans[i] = ans[i-1] + (unsigned long long)phi[i] * (unsigned long long)phi[i];
    }
}


int main()
{

    int cas = 1;
    int t;
    scanf("%d",&t);

    calculatePhi1ToN();
    int a,b;
    while (cas <= t)
    {
        scanf("%d",&a);
        scanf("%d",&b);
        printf("Case %d: %llu\n",cas,ans[b]-ans[a-1]);
        cas++;
    }
    return 0;
}


