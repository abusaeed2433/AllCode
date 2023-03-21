#include<stdio.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t>0)
    {
        t--;
        int n,l,r,s;
        scanf("%d%d%d%d",&n,&l,&r,&s);
        int count = r-l+1;
        int c1 = n-count;
        long long int total = (n*(n+1))/2;
        long long int s1 = (count*(count+1))/2;
        long long int s2 = total - (c1*(c1+1))/2;
        if(s>=s1 && s<=s2)
        {
            int ex = s - s1;
            int arr[count];
            for(int i=0; i<count; i++) arr[i] = i+1+ex/count;
            int i=count-1;
            int brr[n];
            for(int i=1; i<=n; i++)
            {
                brr[i-1]=i;
            }
            while(ex%count!=0)
            {
                arr[i]+=1;
                ex-=1;
            }
            for(int i=0; i<count; i++) brr[arr[i]-1]=-1;
            int co =1,check=1;//index=0;
            for(int i=0; i<n; i++)
            {
                if(co<l)
                {
                    if(brr[i]!=-1)
                    {
                        printf("%d ",brr[i]);
                        co++;
                    }
                }
                else
                {
                    if(check)
                    {
                        for(int j=0; j<count; j++) printf("%d ",arr[j]);
                        check=0;
                        if(brr[i]!=-1) printf("%d ",brr[i]);
                    }
                    else
                    {
                        if(brr[i]!=-1) printf("%d ",brr[i]);
                    }


                }
            }
            printf("\n");
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}
