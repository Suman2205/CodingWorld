#include<bits/stdc++.h>
using namespace std;
class graph{
public: 
    unordered_map<int,vector<int>>adjList;
    vector<pair<int,int>>edges;
    void prepareAdjList(){
        for(int i=0;i<edges.size();i++){
            int u=edges[i].first;
            int v=edges[i].second;
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }
    }
    
};
int main(){
    graph g;
    int n;
    cout<<"Enter no. of vertices: ";
    cin>>n;
    int m;
    cout<<"Enter no. of edges: ";
    cin>>m;
    cout<<"Enter edge pairs of undirected graph: "<<endl;
    for(int i=0;i<m;i++){
        int u;
        int v;
        cout<<"Enter edge pair: ";
        cin>>u>>v;
        pair<int,int>p={u,v};
        g.edges.push_back(p);
    }
}