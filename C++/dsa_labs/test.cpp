#include<bits/stdc++.h>
using namespace std;

int arr[1000];

void traverse(int *n)
{
    for(int i=0; i<*n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insertArray(int *arr,int *n,int k,int item)
{
    if(k>*n || k<0){
        cout << "Invalid index" << endl;
        return;
    }

    int i=*n-1;
    while(i>=k)
    {
        arr[i+1]=arr[i];
        i--;
    }
    arr[k]=item;
    (*n)++;
}
void Delete(int *arr,int *n,int item)
{
//    if(k<0 || k>=n){
//        cout << "Invalid index" << endl;
//        return;
//    }
    int k;
    for(int i=0; i<*n; i++)
    {
        if(arr[i]==item)
        {
            k=i;
            break;
        }
    }
    int i=k+1;
    while(i<*n)
    {
        arr[i-1]=arr[i];
        i++;
    }
    (*n)--;

}
int main()
{
    cout<<"Enter the size of the array : ";
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    while(1)
    {
        cout<<"1. Insertion"<<endl;
        cout<<"2. Deletion " <<endl;
        cout<<"Enter an operation : ";
        int x;
        cin>>x;
        if(x==1)
        {
            cout<<"Enter the index : ";
            int k;
            cin>>k;
            cout<<"Enter the item : ";
            int item;
            cin>>item;
            insertArray(arr,&n,k,item);
            traverse(&n);
            cout << n << endl;
        }
        else
        {
            cout<<"Enter the item : ";
            int item;
            cin>>item;
            Delete(arr,&n,item);
            traverse(&n);
        }
    }

}
