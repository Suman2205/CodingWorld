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
    void bfs(unordered_map<int,bool>&visited,vector<int>&ans,int node){
        queue<int>q;
        q.push(node);
        visited[node]=1;
        while(!q.empty()){
            int frontNode=q.front();
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
    vector<int>BFS(int vertex){
        vector<int>ans;
        unordered_map<int,bool>visited;
        for(int i=0;i<vertex;i++){
            if(!visited[i]){
                bfs(visited,ans,i);
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
    int m;
    cout<<"Enter no. of edges: ";
    cin>>m;
    for(int i=0;i<m;i++){
        int u;
        int v;
        cout<<"Enter edge pair: ";
        cin>>u>>v;
        pair<int,int>p={u,v};
        g.edges.push_back(p);
    }
    // g.edges={{0,4},{4,2},{4,1},{1,5},{5,3},{3,2}};
    g.prepareAdjList();
    vector<int>ans;
    ans=g.BFS(n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}