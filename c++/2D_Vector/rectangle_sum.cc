#include<iostream>
#include<vector>
using namespace std;
int rectanglesum(vector<vector<int>> matrix,int l1,int r1,int l2,int r2){
    int sum=0;
    for (int i = l1; i <=l2; i++)
    {
        for (int j = r1; j<=r2; j++)
        {
            sum+=matrix[i][j];
        }
    }
    return sum;
}
int main(){
    int n,m;
    cout<<"Enter no. of rows: ",cin>>n;
    cout<<"Enter no. of columns: ",cin>>m;
    vector<vector<int>> matrix(n,vector<int>(m));
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           cout<<"Enter element A"<<i+1<<j+1<<"th: ",cin>>matrix[i][j];
        }
    }
    cout<<"Entered matrix: "<<endl;
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    int l1,r1,l2,r2;
    cout<<"l1: ",cin>>l1;
    cout<<"r1: ",cin>>r1;
    cout<<"l2: ",cin>>l2;
    cout<<"r2: ",cin>>r2;
    int sum=rectanglesum(matrix,l1,r1,l2,r2);
    cout<<"The sum of the rectangular portion of matrix is "<<sum<<endl;
    return 0;
}