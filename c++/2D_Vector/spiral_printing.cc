#include<iostream>
#include<vector>
using namespace std;
void spiralorder(vector<vector<int>> matrix){
    int left=0;
    int right=matrix[0].size()-1;
    int top=0;
    int bottom=matrix.size()-1;
    int tne=matrix.size()*matrix[0].size();
    int direction=0;
    int count=0;
    while (left<=right&&top<=bottom)
    {
        if (direction==0)
        {
            for (int col = left; col <=right; col++)
            {
                cout<<matrix[top][col]<<" ";
            }
            top++;
            count++;
        }
        if (direction==1)
        {
            for (int row =top; row <=bottom; row++)
            {
                cout<<matrix[row][right]<<" ";
            }
            right--;
            count++;
        }
        if (direction==2)
        {
            for (int col =right; col>=left; col--)
            {
                cout<<matrix[bottom][col]<<" ";
            }
            bottom--;
            count++;
        }
        if(direction==3)
        {
            for (int row =bottom ; row>=top; row--)
            {
                cout<<matrix[row][left]<<" ";
            }
            left++;
            count++;
        }
        direction=(direction+1)%4;
    }
    
}
int main(){
    int n,m;
    cout<<"Enter no. of rows of matrix: ",cin>>n;
    cout<<"Enter no. of columns of matrix: ",cin>>m;
    vector<vector<int>>matrix(n,vector<int>(m));
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
        for (int j = 0; j < m; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    spiralorder(matrix);
    return 0;
}