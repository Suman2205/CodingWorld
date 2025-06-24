#include<bits/stdc++.h>
using namespace std;
class graph{
public:
    unordered_map<int,vector<pair<int,int>>>adjList;
    vector<pair<pair<int,int>,int>>edges;
    vector<int>vertices;
    void prepareAdjList(){
        for(int i=0;i<edges.size();i++){
            int u=edges[i].first.first;
            int v=edges[i].first.second;
            int w=edges[i].second;
            adjList[u].push_back({v,w});
            adjList[v].push_back({u,w});
        }
    }
    vector<pair<pair<int,int>,int>>Prims(int n){
        vector<int>key(n,INT_MAX);
        vector<bool>mst(n,false);
        vector<int>parent(n,-1);
        //let's start the algo
        key[0]=0;
        parent[0]=-1;
        for(int i=0;i<n;i++){
            int mini=INT_MAX;
            int u;
            for(int v=0;v<n;v++){   //finding min weight
                if(mst[v]==false&&key[v]<mini){
                    u=v;
                    mini=key[v];
                }
            }
            //make min node as true
            mst[u]=true;
            for(auto it:adjList[u]){
                int v=it.first;
                int w=it.second;
                if(mst[v]==false&&w<key[v]){
                    parent[v]=u;
                    key[v]=w;
                }
            }
        }
        //making final result of edges that are selected by minimizing their weight
        vector<pair<pair<int,int>,int>>result;
        for(int i=1;i<n;i++){
            result.push_back({{parent[i],i},key[i]});
        }
        return result;
    }
};
int main(){
    graph g;
    int n;
    cout<<"Enter no. of vertices: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int v;
        cin>>v;
        g.vertices.push_back(v);
    }
    int m;
    cout<<"Enter no. of edges: ";
    cin>>m;
    cout<<"Enter all edge pair with their weight: "<<endl;
    for(int i=0;i<m;i++){
        cout<<"Enter edge pair with weight: ";
        int u,v,w;
        cin>>u>>v>>w;
        pair<pair<int,int>,int>p={{u,v},w};
        g.edges.push_back(p);
    }
    g.prepareAdjList();
    vector<pair<pair<int,int>,int>>result=g.Prims(n);
    int cost=0;
    for(auto it:result){
        cout<<it.first.first<<" "<<it.first.second<<" "<<it.second<<endl;
        cost+=it.second;
    }
    cout<<"Total cost: "<<cost<<endl;
    return 0;
}