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
        }
    }
    vector<int>dijkstra(int n,int source){
        vector<int>dist(n,INT_MAX);
        set<pair<int,int>>st;
        dist[source]=0;
        st.insert({0,source});
        while(!st.empty()){
            auto top=*(st.begin());
            int nodeDistance=top.first;
            int topNode=top.second;
            st.erase(st.begin());
            for(auto neighbour:adjList[vertices[topNode]]){
                if((nodeDistance+neighbour.second)<dist[neighbour.first-vertices[0]]){
                    auto record=st.find({dist[neighbour.first-vertices[0]],neighbour.first-vertices[0]});
                    if(record!=st.end()){
                        st.erase(record);
                    }
                    dist[neighbour.first-vertices[0]]=nodeDistance+neighbour.second;
                    st.insert({dist[neighbour.first-vertices[0]],neighbour.first-vertices[0]});
                }
            }
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
    cout<<"Enter all edge pairof Directed graph with their weight: "<<endl;
    for(int i=0;i<m;i++){
        cout<<"Enter edge pair with weight: ";
        char u,v;
        int w;
        cin>>u>>v>>w;
        pair<pair<int,int>,int>p={{u,v},w};
        g.edges.push_back(p);
    }
    g.prepareAdjList();
    cout<<"Taking '"<<g.vertices[0]<<"' as a source node for Dijkstra algorithm"<<endl;
    vector<int>res=g.dijkstra(n,0);
    cout<<"Shortest distance of every vertices taking '"<<g.vertices[0]<<"' as a source node:"<<endl;
    for(int i=0;i<res.size();i++){
        cout<<g.vertices[0]<<"->"<<g.vertices[i]<<": "<<res[i]<<endl;
    }
    return 0;
}