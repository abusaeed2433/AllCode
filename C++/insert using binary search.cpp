#include<bits/stdc++.h>
using namespace std;
int a[100];
int n;

void mrg(int item)
{
    int s,e;
    s = 0;
    e = n-1;
    int mid = (s+e)/2;

    while(s <= e && item!=a[mid])
    {
        if(item<a[mid])
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
        mid=(s+e)/2;
    }

    cout << "mid: " << mid << endl;

    int pos;
    if(item<a[mid]) pos=mid;
    else pos=mid+1;

    int i;
    for(i=n-1; i>=pos; i--) a[i+1]=a[i];

    a[pos]=item;

    n++;
}


int main()
{
    cin>>n;
    int i;
    for(i=0; i<n; i++) cin>>a[i];

    int tmp;
    while(true){
        cout << "Item: ";
        cin >> tmp;

        if(tmp==-1) break;

        mrg(tmp);
        for(i=0; i<n; i++) cout<<a[i]<<" ";
        cout << endl;
    }

}

