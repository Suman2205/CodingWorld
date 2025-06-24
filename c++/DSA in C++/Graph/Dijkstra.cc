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
    vector<int>dijkstra(int n,int source){
        vector<int>dist(n,INT_MAX);
        set<pair<int,int>>st;
        dist[source]=0;
        st.insert({0,source});
        while(!st.empty()){
            auto top=*(st.begin());
            int nodeDistance=top.first;
            int topNode=top.second;
            //remove top record now
            st.erase(st.begin());
            //traverse on neighbours
            for(auto neighbour:adjList[topNode]){
                if((nodeDistance+neighbour.second)<dist[neighbour.first]){
                    auto record=st.find({dist[neighbour.first],neighbour.first});
                    if(record!=st.end()){
                        st.erase(record);
                    }
                    dist[neighbour.first]=nodeDistance+neighbour.second;
                    //record push into set
                    st.insert({dist[neighbour.first],neighbour.first});
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
    vector<int>res=g.dijkstra(n,0);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}