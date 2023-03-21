#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {

        int n,q;
        cin >> n >> q;

        int arr[n+1];
        arr[0] = 0;
        int tmp;

        for(int i=0; i<n; i++)
        {
            cin >> tmp;
            arr[i+1] = arr[i] + (tmp%2);
        }

        int total = arr[n];

        while(q-- >0)
        {
            int l,r,k;
            cin >> l >> r >> k;

            int nTotal = total - (arr[r]-arr[l-1]);
            if(k%2==1)
            {
                nTotal += (r-l+1);
            }
            if(nTotal % 2==1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }

    }
}
