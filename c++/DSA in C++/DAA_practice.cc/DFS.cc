#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class graph{
public:
    unordered_map<char,vector<char>>adjList;
    vector<char>vertices;
    vector<pair<char,char>>edges;
    void prepareAdjList(){
        for(int i=0;i<edges.size();i++){
            char u=edges[i].first;
            char v=edges[i].second;
            adjList[u].push_back(v);
        }
    }
    void dfs(vector<char>&ans,unordered_map<char,bool>&visited,char node){
        ans.push_back(node);
        visited[node]=1;
        for(char vertex:adjList[node]){
            if(!visited[vertex]){
                dfs(ans,visited,vertex);
            }
        }
    }
    vector<char>DFS(int n){
        vector<char>ans;
        unordered_map<char,bool>visited;
        for(int i=0;i<n;i++){
            if(!visited[vertices[i]]){
                dfs(ans,visited,vertices[i]);
            }
        }
        return ans;
    }
};
int main(){
    graph g;
    int n;
    cout<<"Enter no. of vertice of directed graph: ";
    cin>>n;
    cout<<"Enter all vertices of graph: ";
    for(int i=0;i<n;i++){
        char x;
        cin>>x;
        g.vertices.push_back(x);
    }
    int m;
    cout<<"Enter no. of edges: ";
    cin>>m;
    cout<<"Enter all edge pairs of directed graph: "<<endl;
    for(int i=0;i<m;i++){
        cout<<"Enter edge pair: ";
        char u,v;
        cin>>u>>v;
        g.edges.push_back({u,v});
    }
    g.prepareAdjList();
    vector<char>ans=g.DFS(n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}