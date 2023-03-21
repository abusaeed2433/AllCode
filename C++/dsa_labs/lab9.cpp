#include<bits/stdc++.h>

using namespace std;

//quick sort

void swapVal(int &v1, int &v2)
{
    int tmp = v2;
    v2 = v1;
    v1 = tmp;
}

int Partition(int *arr, int low, int high)
{
    int &pivot = arr[high];
    int pin = low;

    for(int i=low; i<high; i++)
    {
        if(arr[i] < pivot)
        {
            swapVal(arr[i],arr[pin]);
            pin++;
        }
    }
    swapVal(arr[pin],pivot);

    return pin;
}

void quickSort(int *arr, int low, int high)
{
    if(low >= high) return;

    int pin = Partition(arr,low,high);

    quickSort(arr,low,pin-1);
    quickSort(arr,pin+1,high);
}


int main()
{
    int n;
    while(true)
    {
        cout << "Enter size: ";
        cin >> n;
        if(n==-1) break;
        int arr[n];
        cout << "Enter array elements: ";
        for(int i=0; i<n; i++) cin >> arr[i];

        quickSort(arr,0,n-1);

        for(int i=0; i<n; i++) cout << arr[i] << "\t";
        cout << endl;
    }
}


