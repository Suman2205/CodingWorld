#include<iostream>
#include<algorithm>
#include<string>
#include<map>
#include<vector>
#include<unordered_map>
#include<list>
using namespace std;
class graph{
public:
    unordered_map<int,list<int>>adj;
    void addEdge(int u,int v,bool direction){
        adj[u].push_back(v);
        if(direction==0){
            adj[v].push_back(u);
        }
    }
    void printAdjList(){
        for(auto i:adj){
            cout<<i.first<<"->";
            for(auto j:i.second){
                cout<<j<<",";
            }
            cout<<endl;
        }
    }
};
int main(){
    int n;
    cout<<"Enter no. of vertices: ";
    cin>>n;
    int m;
    cout<<"Enter no. of edges: ";
    cin>>m;
    graph g;
    for(int i=0;i<m;i++){
        int u,v;
        cout<<"Enter edge pair: ";
        cin>>u>>v;
        g.addEdge(u,v,0);
    }
    g.printAdjList();
    return 0;
}