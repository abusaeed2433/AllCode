#include<bits/stdc++.h>

using namespace std;


//insertion sort and binary search in array


void print(int *arr,int n){
    cout <<"Printing array..." << endl;
    for(int i=0;i<n;i++){
        cout << arr[i] << "\t";
    }
    cout << endl;
}


void sortArray(int *arr, int n){
    for(int i=1;i<n;i++){
        int j = i;
        int tmp = arr[i];
        while(j>0 && arr[j-1]>tmp){
            arr[j] = arr[j-1];
            j--;
        }
        arr[j] = tmp;
    }
}

int main(){
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];
    cout << "Enter items: ";
    for(int i=0;i<n;i++) cin >> arr[i];

    print(arr,n);

    sortArray(arr,n);

    print(arr,n);

}
