#include<bits/stdc++.h>

using namespace std;

void swapVal(int &v1, int &v2){
    int tmp = v2;
    v2 = v1;
    v1 = tmp;
}

int Partition(int *arr, int low, int high){
    int pIndex = low;
    int &pivot = arr[high];
    for(int i=low;i<high;i++){
        if(arr[i] < pivot){
            swapVal(arr[pIndex],arr[i]);
            pIndex++;
        }
    }
    swapVal(arr[pIndex],pivot);
    return pIndex;
}

void quickSort(int *arr,int low, int high){
    if(low >= high) return;

    int pInd = Partition(arr,low,high);
    quickSort(arr,low,pInd-1);
    quickSort(arr,pInd+1,high);
}

int main(){

    while(true){
        int n;
        cin >> n;
        if(n==-1) break;
        int arr[n];
        for(int i=0;i<n;i++) cin >> arr[i];
        quickSort(arr,0,n-1);
        for(int i=0;i<n;i++) cout << arr[i] << " ";
        cout << endl;
    }
}
