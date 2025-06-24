#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<map>
#include<vector>
#include<list>
#include<queue>
using namespace std;
class graph{
public:
    unordered_map<char,vector<char>>adjList;
    vector<char>vertices;
    vector<pair<char,char>>edges;
    void prepareAdjList(){
        for(int i=0;i<edges.size();i++){
            int u=edges[i].first;
            int v=edges[i].second;
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }
    }
    void bfs(unordered_map<char,bool>&visited,vector<char>&ans,char node){
        queue<char>q;
        q.push(node);
        visited[node]=1;
        while(!q.empty()){
            char frontNode=q.front();
            q.pop();
            ans.push_back(frontNode);
            for(auto i:adjList[frontNode]){
                if(!visited[i]){
                    q.push(i);
                    visited[i]=1;
                }
            }
        }
    }
    vector<char>BFS(){
        vector<char>ans;
        unordered_map<char,bool>visited;
        for(int i=0;i<vertices.size();i++){
            if(!visited[vertices[i]]){
                bfs(visited,ans,vertices[i]);
            }
        }
        return ans;
    }
};
int main(){
    graph g;
    int n;
    cout<<"Enter no. of vertices: ";
    cin>>n;
    cout<<"Enter all vertices: ";
    for(int i=0;i<n;i++){
        char x;
        cin>>x;
        g.vertices.push_back(x);
    }
    int m;
    cout<<"Enter no. of edges for undirected graph: ";
    cin>>m;
    for(int i=0;i<m;i++){
        char u;
        char v;
        cout<<"Enter edge pair: ";
        cin>>u>>v;
        pair<char,char>p={u,v};
        g.edges.push_back(p);
    }
    // g.edges={{0,4},{4,2},{4,1},{1,5},{5,3},{3,2}};
    g.prepareAdjList();
    vector<char>ans;
    ans=g.BFS();
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}