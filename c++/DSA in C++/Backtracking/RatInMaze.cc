#include <bits/stdc++.h>
using namespace std;
void getAns(vector<vector<int>>&maze,int row,int col,vector<string>&ans,string path){
    int n=maze.size();
    if(row<0||col<0||row>=n||col>=n||maze[row][col]==0||maze[row][col]==-1){
        return;
    }
    if(row==n-1&&col==n-1){
        ans.push_back(path);
        return;
    }
    
    maze[row][col]=-1;
    getAns(maze,row-1,col,ans,path+"U");
    getAns(maze,row+1,col,ans,path+"D");
    getAns(maze,row,col+1,ans,path+"R");
    getAns(maze,row,col-1,ans,path+"L");
    maze[row][col]=1;
}
int main(){
    vector<vector<int>>maze={{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
    vector<string>ans;
    string path="";
    int n=maze.size();
    getAns(maze,0,0,ans,path);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}