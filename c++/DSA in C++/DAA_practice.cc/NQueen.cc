#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isSafe(vector<string>&board,int row,int col,int n){
    for(int i=0;i<n;i++){    //vertical
        if(board[i][col]=='Q'){
            return false;
        }
    }
    for(int j=0;j<n;j++){
        if(board[row][j]=='Q'){
            return false;
        }
    }
    for(int i=row,j=col;i>=0&&j<n;i--,j++){
        if(board[i][j]=='Q'){
            return false;
        }
    }
    for(int i=row,j=col;i>=0&&j>=0;i--,j--){
        if(board[i][j]=='Q'){
            return false;
        }
    }
    return true;
}
void nQueenSolve(vector<string>&board,int row,int n,vector<vector<string>>&ans){
    if(row==n){
        ans.push_back(board);
        return;
    }

    for(int j=0;j<n;j++){
        if(isSafe(board,row,j,n)){
            board[row][j]='Q';
            nQueenSolve(board,row+1,n,ans);
            board[row][j]='.';
        }
    }
}
vector<vector<string>>nQueen(int n){
    vector<string>board(n,string(n,'.'));
    vector<vector<string>>ans;
    nQueenSolve(board,0,n,ans);
    return ans;
}
int main(){
    int n;
    cout<<"Enter of queens or no. of rows of chess board: ";
    cin>>n;
    vector<vector<string>>ans=nQueen(n);
    for(auto i:ans){
        for(auto j:i){
            cout<<j<<endl;
        }
        cout<<endl<<endl;
    }
    return 0;
}