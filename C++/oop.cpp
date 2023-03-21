#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int v,w, parent;
    Node(int v,int w, int parent)
    {
        this->v = v;
        this->w = w;
        this->parent = parent;
    }
};

class Graph
{
    int n;
    vector< vector<Node> > adj;
    vector<int> dist;
    vector<bool> visited;

public:
    Graph(int n)
    {
        this->n = n;
        adj.resize(n);
        dist.resize(n,INT_MAX);
        visited.resize(n,false);

    }

    void addEdge(int u,int v, int w)
    {
        u--; v--;
        adj[u].push_back(Node(v,w,u));
        adj[v].push_back(Node(u,w,v));
    }

    void dijkstra(int st)
    {

        st--;
        dist[st] = 0;

        for(int ii=0; ii<n-1; ii++)
        {

            visited[st] = true;
            for(auto nd : adj[st]) dist[nd.v] = min(dist[nd.v],dist[nd.parent]+nd.w);

            int mnDis = INT_MAX;
            for(int i=0; i<n; i++)
            {
                if(visited[i]) continue;

                if(mnDis > dist[i])
                {
                    mnDis = dist[i];
                    st = i;
                }
            }
        }
        showDist();
    }

    void showDist()
    {
        for(int i=0; i<n; i++) cout << i+1 << " - " << dist[i] << endl;
    }
};


int main()
{
    Graph g(5);

    g.addEdge(1,2,4);
    g.addEdge(1,3,5);
    g.addEdge(1,4,2);

    g.addEdge(2,4,3);
    g.addEdge(2,5,12);

    g.addEdge(3,4,2);

    g.addEdge(4,5,1);

    g.dijkstra(1);
    return 0;
}
