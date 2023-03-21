#include<iostream>
#include "ComplexNumber.h"

using namespace std;


template<class T>
class Matrix{
    Complex<T> mat[2][2];
public:
    Matrix(){}
    Matrix(int *arr){
        mat[0][0] = Complex<T>(arr[0],arr[1]);
        mat[0][1] = Complex<T>(arr[2],arr[3]);
        mat[1][0] = Complex<T>(arr[4],arr[5]);
        mat[1][1] = Complex<T>(arr[6],arr[7]);
    }

    Matrix<int> operator+(Matrix mt){
        Matrix<int> ans;
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                ans.mat[i][j] = mat[i][j] + mt.mat[i][j];
            }
        }
        return ans;
    }

    void show(){
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                mat[i][j].show();
            }
            cout << endl;
        }
        cout << endl;
    }

};

int main(){


    int arr[] = {0,0,1,1,2,2,3,3};
    Matrix<int> mat1(arr);
    int brr[] = {1,1,2,2,3,3,4,4};
    Matrix<int> mat2(brr);

    mat1.show();
    mat2.show();

    Matrix<int> mat = mat1+mat2;
    mat.show();
}
