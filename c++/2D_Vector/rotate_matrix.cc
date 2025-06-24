#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void rotatematrix(vector<vector<int>>&v){
    for (int i = 0; i <v.size(); i++)
    {
        for (int j = 0; j <i; j++)
        {
            swap(v[i][j],v[j][i]);
        }
    }
    for (int i = 0; i <v.size(); i++)
    {
        reverse(v[i].begin(),v[i].end());
    }
}
int main(){
    int n,m;
    cout<<"Enter no. of rows of matrix: ",cin>>n;
    cout<<"Enter no. of columns of matrix: ",cin>>m;
    vector<vector<int>>vec(n,vector<int>(m));
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           cout<<"Enter element A"<<i+1<<j+1<<"th: ",cin>>vec[i][j];
        }
    }
    cout<<"Entered matrix: "<<endl;
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    rotatematrix(vec);
    cout<<"90 degree cloclwise rotated matrix: "<<endl;
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}