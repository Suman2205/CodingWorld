#include<iostream>
using namespace std;
int main(){
    int r1,c1;
    cout<<"Enter no. of rows of first matrix: ",cin>>r1;
    cout<<"Enter no. of columns of first matrix: ",cin>>c1;
    int A[r1][c1];
    cout<<"Enter elements of first matrix"<<endl;
    for (int i = 0; i <r1; i++)
    {
        for (int j = 0; j <c1; j++)
        {
            cout<<"Enter element A"<<i+1<<j+1<<": ",cin>>A[i][j];
        }
    }
    int r2,c2;
    cout<<"Enter no. of rows of second matrix: ",cin>>r2;
    cout<<"Enter no. of columns of second matrix: ",cin>>c2;
    int B[r2][c2];
    cout<<"Enter elements of second matrix"<<endl;
    for (int i = 0; i <r2; i++)
    {
        for (int j = 0; j <c2; j++)
        {
            cout<<"Enter element B"<<i+1<<j+1<<": ",cin>>B[i][j];
        }
    }
    if (c1!=r2)
    {
        cout<<"Matrix multiplication is not possible"<<endl;
    }
    else
    {
        int C[r1][c2];
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {   
                C[i][j]=0;
                for (int k = 0; k < r2; k++)
                {
                    C[i][j]+=A[i][k]*B[k][j];
                }
            }   
        }
        for (int i = 0; i <r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cout<<C[i][j]<<" ";
            }
            cout<<endl;
        } 
    }
    return 0;
}