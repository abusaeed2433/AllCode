#include<iostream>

using namespace std;


int main ()
{
    int data[] = {10, 340, 200, 0, 50, 60};
    float sum = 0;
    cout << sizeof(data) << " - " << sizeof(int) << endl;
    for(int i = 0; i <= sizeof(data) / sizeof(int); i++)
        sum += 1 / data[i];
    cout << sum << endl;
    return 0;
}
