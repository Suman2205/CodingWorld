#include<bits/stdc++.h>
using namespace std;
class graph{
public:
    unordered_map<char,vector<pair<char,int>>>adjList;
    vector<pair<pair<char,char>,int>>edges;
    vector<char>vertices;
    void prepareAdjList(){
        for(int i=0;i<edges.size();i++){
            char u=edges[i].first.first;
            char v=edges[i].first.second;
            int w=edges[i].second;
            adjList[u].push_back({v,w});
            adjList[v].push_back({u,w});
        }
    }
    vector<pair<pair<char,char>,int>>Prims(int n){
        vector<int>key(123,INT_MAX);
        vector<bool>mst(123,false);
        vector<int>parent(123,-1);
        key[vertices[0]]=0;
        parent[vertices[0]]=-1;
        for(int i=0;i<n;i++){
            int mini=INT_MAX;
            char u;
            for(int v=0;v<n;v++){  
                if(mst[vertices[v]]==false&&key[vertices[v]]<mini){
                    u=vertices[v];
                    mini=key[vertices[v]];
                }
            }
            mst[u]=true;
            for(auto it:adjList[u]){
                char v=it.first;
                int w=it.second;
                if(mst[v]==false&&w<key[v]){
                    parent[v]=u;
                    key[v]=w;
                }
            }
        }
        vector<pair<pair<char,char>,int>>result;
        for(int i=1;i<n;i++){
            result.push_back({{parent[vertices[i]],vertices[i]},key[vertices[i]]});
        }
        return result;
    }
};
int main(){
    graph g;
    int n;
    cout<<"Enter no. of vertices: ";
    cin>>n;
    cout<<"Enter all vertices of undirected graph: ";
    for(int i=0;i<n;i++){
        char v;
        cin>>v;
        g.vertices.push_back(v);
    }
    int m;
    cout<<"Enter no. of edges: ";
    cin>>m;
    cout<<"Enter all edge pair with their weight: "<<endl;
    for(int i=0;i<m;i++){
        cout<<"Enter edge pair with weight: ";
        char u,v;
        int w;
        cin>>u>>v>>w;
        pair<pair<char,char>,int>p={{u,v},w};
        g.edges.push_back(p);
    }
    g.prepareAdjList();
    vector<pair<pair<char,char>,int>>result=g.Prims(n);
    int cost=0;
    cout<<"Minimum Spanning Tree of given graph using Prims's algorithm: "<<endl;
    for(auto it:result){
        cout<<it.first.first<<" "<<it.first.second<<" "<<it.second<<endl;
        cost+=it.second;
    }
    cout<<"Total cost of MST of given graph: "<<cost<<endl;
    return 0;
}