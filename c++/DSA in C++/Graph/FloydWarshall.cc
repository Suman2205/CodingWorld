#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class graph{
public:
    vector<char>vertices;
    vector<vector<int>>adjMatrix;
    void floydWarshall(int n){
        for(int k=0;k<n;k++){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(adjMatrix[i][k]!=INT_MAX&&adjMatrix[k][j]!=INT_MAX&&(adjMatrix[i][j]>adjMatrix[i][k]+adjMatrix[k][j])){
                        adjMatrix[i][j]=adjMatrix[i][k]+adjMatrix[k][j];
                    }
                }
            }
        }
        return;
    }
};
int main(){
    graph g;
    int n;
    cout<<"Enter no. of vertices: ";
    cin>>n;
    cout<<"Enter all vertices of directed graph: ";
    for(int i=0;i<n;i++){
        char x;
        cin>>x;
        g.vertices.push_back(x);
    }
    int m;
    cout<<"Enter no. of edges: ";
    cin>>m;
    g.adjMatrix.assign(n,vector<int>(n,INT_MAX));
    for(int i=0;i<n;i++){
        g.adjMatrix[i][i]=0;
    }
    cout<<"Enter all edges with its width: "<<endl;
    for(int i=0;i<m;i++){
        cout<<"Enter edge with parir with width: ";
        char u,v;
        int w;
        cin>>u>>v>>w;
        g.adjMatrix[u-'A'][v-'A']=w;
    }
    g.floydWarshall(n);
    cout<<"All pair shortest path for every vertex are: "<<endl;
    for(int i=0;i<n;i++){
        cout<<"   "<<g.vertices[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<g.vertices[i]<<"  ";
        for(int j=0;j<n;j++){
            if(g.adjMatrix[i][j]==INT_MAX){
                cout<<"INF"<<" ";
            }
            else if(g.adjMatrix[i][j]<0){
                cout<<g.adjMatrix[i][j]<<"  ";
            }
            else{
                cout<<g.adjMatrix[i][j]<<"   ";
            }
            
        }
        cout<<endl;
    }
    return 0;
}