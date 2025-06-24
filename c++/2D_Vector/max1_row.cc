#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int maxOnesRow(vector<vector<int>>v ){
    int n=v.size();
    int maxOnes=INT_MIN;
    int maxOnesRow=-1;
    int col=v[0].size();
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <v[i].size() ; j++)
        {
            if (v[i][j]==1)
            {
                int noOfOnes=col-j;
                if (maxOnes<noOfOnes)
                {
                    maxOnes=noOfOnes;
                    maxOnesRow=i;
                }
            } 
        }
    }
    return maxOnesRow;
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
    cout<<"Index number of row having maximum ones is "<<maxOnesRow(vec)<<endl;
    return 0;
}