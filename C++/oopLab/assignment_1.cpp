#include<iostream>
using namespace std;

void takeIntegerInput(int *);
void deletion(int*, int, int*,bool isAfterDelete = false);
void insertion(int*, int, int, int*, bool isAfterInsert = false);
void traverse(int*, int, bool = false);



int main()
{

    int n=0;
    cout << "Size of array: ";
    takeIntegerInput(&n);

    int *arr;
    arr = (int*) malloc(max(1,n)*sizeof(int));

    if(n>0) cout << "Enter Array elements" << endl;

    for(int i=0; i<n; i++)
    {
        cout << "Enter element " << i+1 << ": ";
        takeIntegerInput(arr+i);
    }
    if(n<=0){
        n = 5;
        realloc(arr,n*sizeof(int));
        for(int i=0;i<n;i++) arr[i] = i+1;
        cout << "Continuing with default array of size 5 :)" << endl;
    }

    traverse(arr,n);

    int check;
    bool stopLoop = false;
    while(true)
    {
        cout << "Enter your command:\n"
             << "1 -> Before insert\t" << "2 -> Before Delete\t" << endl
             << "3 -> After insert\t"  << "4 -> After delete" << endl
             << "0 -> Exit" << endl;

        takeIntegerInput(&check);

        int index,item;
        switch(check)
        {
        case 0:
            traverse(arr,n,true);
            cout << "\tPROGRAM IS CLOSED" << endl;
            stopLoop = true;
            break;

        case 1:
            cout << "BEFORE INSERT" << endl;

            cout << "Enter index(1,2...): ";
            takeIntegerInput(&index);

            cout << "Enter item to be inserted: ";
            takeIntegerInput(&item);

            index-=1;
            insertion(arr,index,item,&n);
            break;

        case 2:
            cout << "Before Delete\n" << "Enter index(1,2...) : ";
            takeIntegerInput(&index);

            index-=2;
            deletion(arr,index,&n);
            break;

        case 3:
            cout << "AFTER INSERT\n" << "Enter index(1,2...): ";
            takeIntegerInput(&index);

            cout << "Enter item to be inserted: ";
            takeIntegerInput(&item);

            insertion(arr,index,item,&n,true);
            break;

        case 4:
            cout << "AFTER DELETE\n" << "Enter index(1,2...) :";
            takeIntegerInput(&index);

            deletion(arr,index,&n,true);
            break;

        default:
            cout << "Invalid command. Try again..." << endl;
        }

        if(stopLoop) break;
    }


    return 0;
}

void takeIntegerInput(int *num)//will take valid input ignoring all char except (0 to 9) and (-)[exceptional]
{
    string s;
    int realNum,n;
    while(true)
    {
        realNum = 0;
        cin >> s;
        fflush(stdin);
        n = s.length();
        if(n>10)
        {
            cout << "Input is too long. Enter again: ";
            continue;
        }

        int i=0;
        bool isNegative = false;

        if(n>1 && (s[0]=='-')) {
            i=1;
            isNegative = true;
        }

        bool isValidNum = true;

        for( ; i<n; i++)
        {
            if((s[i]>='0' && s[i]<='9'))
            {
                realNum = realNum*10 + (s[i] - 48);
            }
            else
            {
                isValidNum = false;
                cout << "Invalid input found. Try again: ";
                break;
            }
        }
        if(isValidNum)
        {
            *num = realNum * (isNegative ? -1 : 1);
            break;
        }
    }
}

// delete element at index iff valid
void deletion(int *arr, int index, int *n,bool isAfterDelete)
{
    if( (isAfterDelete && index > 0 && index <= *n-1 ) || (!isAfterDelete && index >=0 && index < *n-1) )
    {
        int i = index;
        while(i < *n-1)
        {
            arr[i] = arr[i+1];
            i++;
        }
        *n = *n - 1;
        realloc(arr,(*n)*sizeof(int));//decreasing memory size of arry
        traverse(arr,*n);
    }
    else
    {
        cout << "Invalid index. Try again...\n" << endl;
    }
}


//insert element at given index iff valid
void insertion(int *arr, int index, int item, int *n, bool isAfterInsert)
{
    if( (isAfterInsert && index > 0 && index <= *n) || (!isAfterInsert && index >= 0 && index < *n) )
    {
        int i = *n-1;
        realloc(arr,(*n+1)*sizeof(int));//increasing memory before adding new item
        while(i>=index)
        {
            arr[i+1] = arr[i];
            i--;
        }
        arr[index] = item; // index = i+1
        *n = *n+1;

        traverse(arr,*n);
    }
    else
    {
        cout << "Invalid index. Try again...\n" << endl;
    }
}

//isLastCall: just for freeing memory if program is going to stop
void traverse(int *arr, int n, bool isLastCall)//no need to make bool optional again
{
    if(isLastCall) cout << "\t PRINTING FINAL ARRAY" << endl;
    else cout << "\tPRINTING ARRAY" << endl;

    if(n<=0)
    {
        cout << "Array is empty\n" << endl;
        return;
    }

    for(int i=0; i<n; i++) cout << arr[i] <<"   ";

    if(isLastCall) free(arr);

    cout << endl << endl;
}

