
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n;
    int arr[100000],arr1[100000];
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        for(int m=0;m<n;m++)
        {
            cin>>arr[m];
        }
        for(int k=0;k<n-1;k++)
        {
            int d=abs(arr[k]-arr[k+1]);
            //cout<<d;
            arr1[k]+=d;
        }
        int x=arr1[n-2];
        for(int l=n-3;l>=0;l--)
        {
            if (x<arr1[l])
            {
                x=arr1[l];
            }
            else if(x==arr1[l])
            {
                x+=1;
            }
            else
            {
                continue;
            }
        }
        printf("Case %d: %d",i+1,x);
    }
    return 0;
}
