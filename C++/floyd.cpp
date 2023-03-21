#include<bits/stdc++.h>

using namespace std;

class Graph{
    int n;
    vector< vector<int> > mat;
public:
    Graph(int n){
        this->n = n;
        mat.resize(n, vector<int>(n) );
        initializeMat();
    }

    void initializeMat(){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j) mat[i][j] = 0;
                else mat[i][j] = INT_MAX;
            }
        }
    }


    void addEdge(int u, int v, int w){
        mat[u][v] = w;
    }

    void applyFloyd(){
        for(int k=0;k<n;k++){

            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(mat[i][k] == INT_MAX || mat[k][j] == INT_MAX) continue;

                    mat[i][j] = min(mat[i][j], mat[i][k]+mat[k][j]);
                }
            }

        }

        showDist();
    }

    void showDist(){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout << mat[i][j] << "\t";
            }
            cout << endl;
        }
    }

};

int main(){
    Graph g(3);

    g.addEdge(0,1,4);
    g.addEdge(1,0,2);
    g.addEdge(2,1,-3);
    g.addEdge(0,2,5);

    g.applyFloyd();

    return 0;
}
