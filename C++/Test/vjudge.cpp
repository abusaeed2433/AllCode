#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    string arr[n];
    char chs[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
        chs[i] = arr[i][0];
    }

    int i=0;
    bool isPossible = false;
    while(i<n){
        isPossible = true;
        for(int j=0;j<arr[i].size();j++){
            bool doesContain = false;
            for(int k=0;k<n;k++){
                if(arr[i][j]==chs[k]){
                    doesContain = true;
                    break;
                }
            }
            if(!doesContain){
                isPossible = false;
                break;
            }
        }
        if(isPossible) break;
        i++;
    }

    if(isPossible) cout << "Y" << endl;
    else cout << "N" << endl;
    return 0;
}
