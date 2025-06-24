#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class graph{
public:
    unordered_map<char,vector<char>>adjList;
    vector<pair<char,char>>edges;
    vector<char>vertices;
    void prepareAdjList(){
        for(int i=0;i<edges.size();i++){
            char u=edges[i].first;
            char v=edges[i].second;
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }
    }
    void bfs(vector<char>&ans,unordered_map<char,bool>&visited,char node){
        queue<char>q;
        q.push(node);
        visited[node]=1;
        while(!q.empty()){
            char frontNode=q.front();
            q.pop();
            ans.push_back(frontNode);
            for(char node:adjList[frontNode]){
                if(!visited[node]){
                    q.push(node);
                    visited[node]=1;
                }
            }
        }
    }
    vector<char>BFS(int n){
        vector<char>ans;
        unordered_map<char,bool>visited;
        for(int i=0;i<n;i++){
            if(!visited[vertices[i]]){
                bfs(ans,visited,vertices[i]);
            }
        }
        return ans;
    }
};
int main(){
    graph g;
    int n;
    cout<<"Enter no. of vertices of graph: ";
    cin>>n;
    cout<<"Enter all the vertices of graph: ";
    for(int i=0;i<n;i++){
        char x;
        cin>>x;
        g.vertices.push_back(x);
    }
    int m;
    cout<<"Enter no. of edges: ";
    cin>>m;
    cout<<"Enter all edges pair: "<<endl;
    for(int i=0;i<m;i++){
        cout<<"Enter edge pair: ";
        char u,v;
        cin>>u>>v;
        g.edges.push_back({u,v});
    }
    g.prepareAdjList();
    vector<char>ans=g.BFS(n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}