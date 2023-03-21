#include<iostream>
using namespace std;

void deletion(int* , int, int*);
void insertion(int*, int, int, int*);
void traverse(int*, int);
int ARRAY_SIZE = 1000;

int main()
{
    int n;
    int arr[ARRAY_SIZE];
    cout << "Enter size of array: ";
    cin >> n;

    //int brr[] = {1,2,3};
    //cout << brr;

    cout << "Enter array elements(space separated):" << endl;

    for(int i=0; i<n; i++) cin >> arr[i];

    traverse(arr,n);

    int check;
    fflush(stdin);
    bool stopLoop = false;
    while(true)
    {
        cout << "\nEnter your command:\n"
             << "1 -> Before insert\t" << "2 -> Before Delete\t" << endl
             << "3 -> After insert\t"  << "4 -> After delete" << endl
             << "0 -> Exit" << endl;
        cin >> check;
        fflush(stdin);

        int index,item;
        switch(check)
        {
        case 0:
            cout << "Final array" << endl;
            traverse(arr,n);
            cout << "Program is closed" << endl;
            stopLoop = true;
            break;

        case 1:
            cout << "Before Insert\n" << "Enter index(1,2...) & item" << endl;
            cin >> index >> item;
            fflush(stdin);
            index-=2;
            insertion(arr,index,item,&n);
            break;

        case 2:
            cout << "Before Delete\n" << "Enter index(1,2...) :";
            cin >> index;
            fflush(stdin);
            index-=2;
            deletion(arr,index,&n);
            break;

        case 3:
            cout << "After Insert\n" << "Enter index(1,2...) & item" << endl;
            cin >> index >> item;
            fflush(stdin);
            insertion(arr,index,item,&n);
            break;

        case 4:
            cout << "After Delete\n" << "Enter index(1,2...) :";
            cin >> index;
            fflush(stdin);
            deletion(arr,index,&n);
            break;

        default:
            cout << "Invalid command. Try again..." << endl;

        }

        if(stopLoop) break;
    }


    return 0;
}


void deletion(int *arr, int index, int *n){
    if(index >=0 && index <= *n-1){
        int i = index;
        while(i < *n-1){
            arr[i] = arr[i+1];
            i++;
        }
        *n = *n - 1;
        traverse(arr,*n);
    }
    else{
        cout << "Invalid index. Try again..." << endl;
    }
}

void insertion(int *arr, int index, int item, int *n){
    if(index >=0 && index<=*n){
        if(*n >= ARRAY_SIZE){
            cout << "Can't insert more elements. Size exceeded." << endl;
            return;
        }
        int i = *n-1;
        while(i>=index){
            arr[i+1] = arr[i];
            i--;
        }
        arr[index] = item; // index = i+1
        *n = *n+1;
        traverse(arr,*n);
    }
    else{
        cout << "Invalid index. Try again..." << endl;
    }
}

void traverse(int *arr, int n )
{
    cout << "\nPrinting array:" << endl;
    for(int i=0; i<n; i++) cout << arr[i] <<"   ";
    cout << endl << endl;
}
