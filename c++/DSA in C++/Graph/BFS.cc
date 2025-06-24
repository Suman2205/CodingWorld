// #include<iostream>
// #include<algorithm>
// #include<unordered_map>
// #include<map>
// #include<vector>
// #include<list>
// #include<queue>
// using namespace std;
// class graph{
// public:
//     unordered_map<char,vector<char>>adjList;
//     vector<char>vertices;
//     vector<pair<char,char>>edges;
//     void prepareAdjList(){
//         for(int i=0;i<edges.size();i++){
//             char u=edges[i].first;
//             char v=edges[i].second;
//             adjList[u].push_back(v);
//             adjList[v].push_back(u);
//         }
//     }
//     void bfs(unordered_map<char,bool>&visited,vector<char>&ans,char node){
//         queue<char>q;
//         q.push(node);
//         visited[node]=1;
//         while(!q.empty()){
//             char frontNode=q.front();
//             q.pop();
//             ans.push_back(frontNode);
//             for(auto i:adjList[frontNode]){
//                 if(!visited[i]){
//                     q.push(i);
//                     visited[i]=1;
//                 }
//             }
//         }
//     }
//     vector<char>BFS(){
//         vector<char>ans;
//         unordered_map<char,bool>visited;
//         for(int i=0;i<vertices.size();i++){
//             if(!visited[vertices[i]]){
//                 bfs(visited,ans,vertices[i]);
//             }
//         }
//         return ans;
//     }
// };
// int main(){
//     graph g;
//     int n;
//     cout<<"Enter no. of vertices: ";
//     cin>>n;
//     cout<<"Enter all vertices: ";
//     for(int i=0;i<n;i++){
//         char x;
//         cin>>x;
//         g.vertices.push_back(x);
//     }
//     int m;
//     cout<<"Enter no. of edges for undirected graph: ";
//     cin>>m;
//     for(int i=0;i<m;i++){
//         char u;
//         char v;
//         cout<<"Enter edge pair: ";
//         cin>>u>>v;
//         pair<char,char>p={u,v};
//         g.edges.push_back(p);
//     }
//     // g.edges={{0,4},{4,2},{4,1},{1,5},{5,3},{3,2}};
//     g.prepareAdjList();
//     vector<char>ans;
//     ans=g.BFS();
//     cout<<"BFS travesal of given graph by taking "<<g.vertices[0]<<" as source node: ";
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }
//     return 0;
// }



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