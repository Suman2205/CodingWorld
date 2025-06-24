#include<bits/stdc++.h>
using namespace std;
class graph{
public:
    vector<pair<pair<char,char>,int>>edges;
    vector<char>vertices;
    vector<int>BellmanFord(int n,int source){
        vector<int>dist(n,INT_MAX);
        dist[source]=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<edges.size();j++){
                char u=edges[j].first.first;
                char v=edges[j].first.second;
                int wt=edges[j].second;
                if(dist[u-vertices[0]]!=INT_MAX&&(dist[u-vertices[0]]+wt)<dist[v-vertices[0]]){
                    dist[v-vertices[0]]=dist[u-vertices[0]]+wt;
                }
            }
        }
        bool flag=false;
        for(int i=0;i<n;i++){
            for(int j=0;j<edges.size();j++){
                char u=edges[j].first.first;
                char v=edges[j].first.second;
                int wt=edges[j].second;
                if(dist[u-vertices[0]]!=INT_MAX&&(dist[u-vertices[0]]+wt)<dist[v-vertices[0]]){
                    dist[v-vertices[0]]=INT_MAX;
                }
            }
        }
        if(flag==true){
            cout<<"In the given graph negative cycle exists so that we are not able to find shortest distance of every vertices"<<endl;
        }
        return dist;
    }
};
int main(){
    graph g;
    int n;
    cout<<"Enter no. of vertices: ";
    cin>>n;
    cout<<"Enter all vertices of directed graph(in lexicographically order): ";
    for(int i=0;i<n;i++){
        char v;
        cin>>v;
        g.vertices.push_back(v);
    }
    int m;
    cout<<"Enter no. of edges: ";
    cin>>m;
    cout<<"Enter all edge pair of Directed graph with their weight: "<<endl;
    for(int i=0;i<m;i++){
        cout<<"Enter edge pair with weight: ";
        char u,v;
        int w;
        cin>>u>>v>>w;
        pair<pair<int,int>,int>p={{u,v},w};
        g.edges.push_back(p);
    }
    cout<<"Taking '"<<g.vertices[0]<<"' as a source node for Bellman Ford algorithm"<<endl;
    vector<int>res=g.BellmanFord(n,0);
    cout<<"Shortest distance of every vertices taking '"<<g.vertices[0]<<"' as a source node:"<<endl;
    for(int i=0;i<res.size();i++){
        cout<<g.vertices[0]<<"->"<<g.vertices[i]<<": "<<res[i]<<endl;
    }
    return 0;
}