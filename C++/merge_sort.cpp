#include<bits/stdc++.h>

using namespace std;


void Merge(int ln,int rl,int *left, int *right, int *arr){
    int i = 0, j = 0, k = 0;

    while(i<ln && j < rl){
        if(left[i]<=right[j]){
            arr[k] = left[i];
            i++;
        }
        else{
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    while(i<ln){
        arr[k] = left[i];
        i++;
        k++;
    }

    while(j<rl){
        arr[k] = right[j];
        j++;
        k++;
    }
}


void mergeSort(int n, int *arr){

    if(n<2) return;


    int mid = n/2;

    int left[mid];
    int right[n-mid];


    for(int i=0;i<mid;i++){
        left[i] = arr[i];
    }

    for(int i=mid;i<n;i++){
        right[i-mid] = arr[i];
    }

    mergeSort(mid,left);
    //cout << "Called" << endl;
    mergeSort(n-mid,right);
    //cout << "Called" << endl;
    Merge(mid,n-mid,left,right,arr);

    //cout << "Called" << endl;

}



int main()
{

    while(1){
        cout << "Enter size: ";
        int n;
        cin >> n;
        int arr[n];
        cout << "Enter items: ";
        for(int i=0;i<n;i++) cin >> arr[i];

        mergeSort(n,arr);


        for(int i=0;i<n;i++) cout << arr[i] << "\t";
        cout << endl;

    }
    return 0;
}
