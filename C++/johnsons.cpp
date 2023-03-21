#include<bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int u,v,w;
    Edge(int u,int v,int w):u(u),v(v),w(w) {}
};

class Edge2
{
public:
    int v,w,par;
    Edge2(int v,int w,int par):v(v),w(w),par(par) {}
};

class Graph
{
    int n,ne;
    vector< vector<int> > mat;
    vector< vector<Edge2> > adj;
    vector<Edge> edges;

public:
    Graph(int n, int ne)
    {
        this->n = n;
        this->ne = ne;
        mat.resize(n, vector<int>(n,INT_MAX) );
        adj.resize(n);

        for(int i=0; i<n; i++) mat[i][i] = 0;
    }

    void addEdge(int u, int v, int w)
    {
        edges.push_back( Edge(u,v,w) );
    }

    void addOneNode()
    {
        ne += n;
        for(int i=0; i<n; i++) addEdge(n,i,0);
    }

    void removeAddedNode()
    {
        ne -= n;
        for(int i=0; i<n; i++) edges.pop_back();
    }

    void bellman()
    {

        addOneNode();

        vector<int> dist(n+1,INT_MAX);
        int src = n;
        dist[src] = 0;

        for(int i=0; i<n-1; i++)
        {
            for(int j=0; j<ne; j++)
            {
                int u = edges[j].u;
                int v = edges[j].v;
                int w = edges[j].w;

                if(dist[u] == INT_MAX) continue;

                dist[v] = min( dist[v], dist[u]+w );
            }
        }

        removeAddedNode();

        cout << "Distance after bellman:\t";
        printDist(dist);

        assignNewWeight(dist);
        cout << "Weight after reweighting:\n";
        printWeight();

//        for(int i=0;i<n;i++){
//            cout << i << ": ";
//            for(int j=0;j<adj[i].size();j++) cout << adj[i][j].v << "\t";
//            cout << endl;
//        }


        startDijkstra();

    }

    void startDijkstra()
    {
        cout << "dijkstra started" << endl;

        for(int k=0; k<n; k++)
        {

            vector<int>& dist = mat[k];
            int src = k;

            printVector(dist);

            vector<int> visited(n,false);
            dist[src] = 0;

            for(int i=0; i<n-1; i++)
            {
                visited[src] = true;

                for(auto nd : adj[src])
                {
                    if(nd.w == INT_MAX || dist[nd.par] == INT_MAX) continue;
                    dist[nd.v] = min(dist[nd.v], nd.w + dist[nd.par]);
                }


                int mn = INT_MAX;

                for(int j=0; j<n; j++)
                {
                    if(!visited[j] && mn > dist[j])
                    {
                        mn = dist[j];
                        src = j;
                    }
                }

            }
        }

        cout << "\n - - - Final weight - - - \n\n";
        printWeight();
    }

    void printVector(vector<int>& v)
    {
        for(int i=0; i<v.size(); i++)
        {
            if(v[i]==INT_MAX) cout << "INF";
            else cout << v[i];
            cout << "\t";
        }
        cout << endl;
    }


    void assignNewWeight(vector<int>& dist)
    {
        for(int i=0; i<ne; i++)
        {
            int& u = edges[i].u;
            int& v = edges[i].v;
            int& w = edges[i].w;

            w = w + dist[u] - dist[v];
            adj[u].push_back(Edge2(v,w,u));
        }
    }

    void printWeight()
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(mat[i][j]==INT_MAX) cout << "INF";
                else cout << mat[i][j];
                cout << "\t";
            }
            cout << endl;
        }
    }

    void printDist(vector<int>& dist)
    {
        for(int i=0; i<n; i++) cout << dist[i] << "\t";

        cout << endl;
    }


};


int main()
{

//    Graph g(4,5);
//    g.addEdge(0,1,3);
//    g.addEdge(0,2,-5);
//
//    g.addEdge(1,3,-2);
//
//    g.addEdge(2,3,6);
//
//    g.addEdge(3,1,4);

    Graph g(4,5);
    g.addEdge(0,2,-2);
    g.addEdge(1,0,4);
    g.addEdge(1,2,3);
    g.addEdge(2,3,2);
    g.addEdge(3,1,-1);
    g.bellman();

    return 0;
}
