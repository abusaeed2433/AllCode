#include<bits/stdc++.h>

using namespace std;

class Edge{
public:
    int u,v,w;
    Edge(int u, int v, int w){
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

class Graph{
    int n,e;
    vector<Edge> edges;
    vector<int> dist;

public:
    Graph(int n, int e){
        this->n = n;
        this->e = e;
        dist.resize(n,INT_MAX);
    }

    void addEdge(int u, int v, int w){
        edges.push_back(Edge(u,v,w));
    }

    void bellman(int src){

        dist[src] = 0;
        for(int i=0; i<n-1; i++){
            for(int j=0;j<e;j++){
                int u = edges[j].u;
                int v = edges[j].v;
                int w = edges[j].w;

                dist[v] = min(dist[v], dist[u] + w);
            }
        }
    }

    void showDistance(){
        for(int i=0;i<n;i++){
            cout << i+1 << " -> " << dist[i] << endl;
        }
    }

    void checkForCycle(){
        vector<int> prevDis = dist;
        bellman(0);

        for(int i=0;i<n;i++){
            if(prevDis[i] > dist[i]){
                cout << "Negative Cycle found" << endl;
                dist = prevDis;
                return;
            }
        }
        dist = prevDis;
        cout << "No Negative cycle" << endl;

    }


};


int main(){

    Graph g(3,2);
    g.addEdge(1,2,-6);
    g.addEdge(0,1,-5);

    g.bellman(0);
    g.showDistance();


    return 0;
}
