#include<iostream>
#include "ComplexNumber.h"

/** program should run without
this line, but not working, may be because of building issue.
idk */

using namespace std;

template<class T>
class Matrix
{
    Complex<T> mat[2][2];
public:
    Matrix() {}
    Matrix(T *arr)
    {
        mat[0][0] = Complex<T>(arr[0],arr[1]);
        mat[0][1] = Complex<T>(arr[2],arr[3]);
        mat[1][0] = Complex<T>(arr[4],arr[5]);
        mat[1][1] = Complex<T>(arr[6],arr[7]);
    }
    Matrix operator+(Matrix mt)
    {
        Matrix<int> ans;
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
            {
                ans.mat[i][j] = mat[i][j] + mt.mat[i][j];
            }
        }
        return ans;
    }
    void show()
    {
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
            {
                mat[i][j].show();
            }
            cout << endl;
        }
        cout << endl;
    }
};
int main()
{
    float arr[] = {0,0,1,1,2,2,3,3.5};
    Matrix<int> mat1(arr);
    float brr[] = {1,1,2,2,3,3,4,4.5};
    Matrix<int> mat2(brr);
    mat1.show();
    mat2.show();
    Matrix<int> mat = mat1+mat2;
    mat.show();
}
