#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isSafe(vector<string>&board,int row,int col,int n){
    for(int j=0;j<n;j++){
        if(board[row][j]=='Q'){
            return false;
        }
    }
    for(int i=0;i<n;i++){
        if(board[i][col]=='Q'){
            return false;
        }
    }
    for(int i=row,j=col;j<n&&i>=0;i--,j++){
        if(board[i][j]=='Q'){
            return false;
        }
    }
    for(int i=row,j=col;j>=0&&i>=0;i--,j--){
        if(board[i][j]=='Q'){
            return false;
        }
    }
    return true;
}
void nQueenSolve(vector<string>&board,int row,int n,vector<vector<string>>&ans){
    if(row==n){
        ans.push_back({board});
        return;
    }
    for(int j=0;j<n;j++){
        if(isSafe(board,row,j,n)){
            board[row][j]='Q';
            nQueenSolve(board,row+1,n,ans);
            board[row][j]='.';
        }
    }
    return;
}
vector<vector<string>>nQueen(int n){
    vector<string>board(n,string(n,'.'));
    vector<vector<string>>ans;
    nQueenSolve(board,0,n,ans);
    return ans;
}
int main(){
    int n;
    cout<<"Enter no. of rows/queens: ";
    cin>>n;
    vector<vector<string>>ans;
    ans=nQueen(n);
    cout<<"Solutions of given N Queen Problem: "<<endl;
    for(auto v:ans){
        for(auto s:v){
            cout<<s<<endl;
        }
        cout<<endl;
        cout<<endl;
    }
    return 0;
}