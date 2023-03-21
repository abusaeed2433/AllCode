#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin >> t;
   while(t--){
    int n,m,r,c;
    cin >> n >> m >> r >> c;
    char arr[n][m];
    fflush(stdin);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << arr[i][j];
        }
        cout << endl;
    }
//    if(array[r+1][c+1] == 'B'){
//        cout << 0 << endl;
//    }
//    else{
//        for(int i=0,j=0;i<n,j<m;i++,j++){
//            if(array[i][c] == 'B' || array[r][j]){
//                cout << 1 << endl;
//            }
//        }
//    }
   }
   return 0;
}
