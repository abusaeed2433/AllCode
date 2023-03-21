#include<bits/stdc++.h>
#define fore(i,l,r) for(int i=l;i<r;i++)
#define input(n,v) for(int i=0; i < n; i++) cin >> v[i];
#define INF LONG_MAX

using namespace std;


class VW{
public:
    int v,w;
    VW(int v, int w):v(v),w(w){}
};

class Graph{
    int n;
    vector< vector<VW> > adj;
    vector<bool> visited;
    vector<long> dist;
    vector<int> par;

public:
    Graph(int n){
        this -> n = n;
        adj.resize(n);
        visited.resize(n,false);
        dist.resize(n,INF);
        par.resize(n,-1);
    }

    void addEdge(int u,int v, int w){
        u--; v--;
        adj[u].push_back(VW(v,w));
        adj[v].push_back(VW(u,w));
    }

    void findPath(){
        int st = 0;
        dist[st] = 0;
        par[st] = 0;

        for(int i=0;i<n-1;i++){

            visited[st] = true;

            long mn = INF, ind = -1;

            for(auto vw : adj[st]){

                if(visited[vw.v]) continue;

                long curDis = dist[st] + vw.w;

                if(dist[vw.v] > curDis){
                    dist[vw.v] = curDis;
                    par[vw.v] = st;
                }

                if(mn > dist[vw.v]){
                    mn = dist[vw.v];
                    ind = vw.v;
                }
            }
            if(ind == -1){
                cout << "-1" << endl;
                return;
            }
            st = ind;
        }

        vector<int> ans;
        st = n-1;
        ans.push_back(n);
        while(st != 0){
            st = par[st];
            if(st == -1){
                cout << "-1" << endl;
                return;
            }
            ans.push_back(st+1);
        }

        for(int i=ans.size()-1;i>=0;i--) cout << ans[i] << " ";
        cout << endl;

    }

};

void inline solve(){
    int p,q,u,v,w;
    cin >> p >> q;
    Graph g(p);
    for(int i=0;i<q;i++){
        cin >> u >> v >> w;
        g.addEdge(u,v,w);
    }
    g.findPath();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}
