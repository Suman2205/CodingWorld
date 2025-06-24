#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter no. of rows of a matrix: ",cin>>r;
    int c;
    cout<<"Enter no. of columns of a matrix: ",cin>>c;
    int A[r][c];
    cout<<"Enter elements of first matrix"<<endl;
    for (int i = 0; i <r; i++)
    {
        for (int j = 0; j <c; j++)
        {
            cout<<"Enter element A"<<i+1<<j+1<<": ",cin>>A[i][j];
        }
    }
    cout<<"Entered array:"<<endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Transpose of entered matrix is :"<<endl;
    int transpose[c][r];
    for (int i = 0; i < c; i++)
    {
       for (int j = 0; j < r; j++)
       {
        transpose[i][j]=A[j][i];
        cout<<transpose[i][j]<<" ";
       }
       cout<<endl;
    }
    return 0;
}