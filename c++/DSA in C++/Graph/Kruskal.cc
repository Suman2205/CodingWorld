#include<bits/stdc++.h>
using namespace std;
struct Compare{
    bool operator()(pair<int,pair<char,char>>a,pair<int,pair<char,char>>b){
        return a.first>b.first;
    }
};
class graph{
public:
    priority_queue<pair<int,pair<char,char>>,vector<pair<int,pair<char,char>>>,Compare>edges;
    vector<char>vertices;
    void makeSet(vector<int>&parent,vector<int>&rank){
        for(int i=0;i<123;i++){
            parent[i]=i;
            rank[i]=0;
        }
    }
    int findParent(vector<int>&parent,int node){
        if(parent[node]==node){
            return node;
        }
        return parent[node]=findParent(parent,parent[node]);
    }
    void unionSet(int u,int v,vector<int>&parent,vector<int>&rank,int w,vector<pair<pair<char,char>,int>>&result){
        u=findParent(parent,u);
        v=findParent(parent,v);
        if(rank[u]<rank[v]){
            parent[u]=v;
        }
        else if(rank[u]>rank[v]){
            parent[v]=u;
        }
        else{
            parent[v]=u;
            rank[u]++;
        }
    }
    vector<pair<pair<char,char>,int>>Kruskal(int n){
        vector<int>parent(123);
        vector<int>rank(123);
        makeSet(parent,rank);
        vector<pair<pair<char,char>,int>>result;
        while(!edges.empty()){
            int w=edges.top().first;
            char u1=edges.top().second.first;
            char v1=edges.top().second.second;
            edges.pop();
            int u=findParent(parent,u1);
            int v=findParent(parent,v1);
            if(u!=v){
                unionSet(u,v,parent,rank,w,result);
                result.push_back({{u1,v1},w});
            }
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
        g.edges.push({w,{u,v}});
    }
    vector<pair<pair<char,char>,int>>result=g.Kruskal(n);
    int cost=0;
    cout<<"Minimum Spanning Tree of given graph using Kruskal's algorithm: "<<endl;
    for(auto it:result){
        cout<<it.first.first<<" "<<it.first.second<<" "<<it.second<<endl;
        cost+=it.second;
    }
    cout<<"Total cost of MST of given graph: "<<cost<<endl;
    return 0;
}