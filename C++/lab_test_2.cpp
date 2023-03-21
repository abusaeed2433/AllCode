#include<bits/stdc++.h>

using namespace std;

class WP{
public:
    double w, p, ppu;
    WP(double w, double p):w(w),p(p){
        ppu = p/w;
    }
};

class TSP{
    int total, nf, nnf, m, n;
    vector<WP> fs;
    vector<WP> nfs;
    vector<int> ansNfs;
    vector< vector<double> > table;
public:
    TSP(){
        cin >> total >> nf >> nnf >> m >> n;

        table.resize(nf+1, vector<double>(m+1,0));

        double w,p;
        for(int i=0;i<nf;i++){
            cin >> w >> p;
            fs.push_back(WP(w,p));
        }

        ansNfs.resize(nf,-1);
        for(int i=0;i<nf;i++){
            cin >> w >> p;
            nfs.push_back(WP(w,p));
        }

        //for(int i=0;i<nfs.size();i++) cout << nfs[i].w << " ";
    }

    void runKS(){
        for(int i=1;i<=nnf;i++){
            for(int j=1;j<=m;j++){

                int tmp = j-(int)fs[i-1].w;
                if(tmp < 0){
                    table[i][j] = table[i-1][j];
                }
                else{
                    table[i][j] = max(table[i-1][j], table[i-1][tmp]+nfs[i-1].p);
                }

            }
        }


        int j = m;

        for(int i = nnf; i>0; i--){
            if(table[i][j] != table[i-1][j]){
                ansNfs[i-1] = 1;
            }

            int tmp = j;
            while(j>=0 && table[i-1][j-1] == table[i-1][tmp]){
                j--;
            }

            //cout << "j: " << j << endl;


        }

        for(int i=0;i<nnf;i++){
            cout << ansNfs[i] << " ";
        }

        cout << endl;

        for(int i=0;i<=nf;i++){
            for(int j=0;j<=m;j++) cout << setw(5) << table[i][j];
            cout << endl;
        }

        sort(fs.begin(),fs.end());
        sort(fs.begin(),fs.end(),[](const WP& lhs, const WP& rhs)
        {
            return lhs.ppu < rhs.ppu;
        });

        for(int i=0;i<pp)

        double ans = table[nf][m];

        while(n--){

            ans = max(ans,)
        }


    }

};

int main(){
    TSP tsp;
    tsp.runKS();
    return 0;
}


