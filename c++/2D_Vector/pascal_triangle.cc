#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> pascaltriangle(int n){
    vector<vector<int>>pascal(n);
    for (int i = 0; i <n; i++)
    {
        pascal[i].resize(i+1);
        for (int j = 0; j <i+1; j++)
        {
            if (j==0||j==i)
            {
                pascal[i][j]=1;
            }
            else{
                pascal[i][j]=pascal[i-1][j]+pascal[i-1][j-1];
            }
        }
    }
    return pascal;
}
int  main(){
    int n;
    cout<<"Enter no. of lines: ",cin>>n;
    vector<vector<int>>ans;
    ans=pascaltriangle(n);
    for (int i = 0; i <ans.size(); i++)
    {
        for (int k = 0; k <n-i-1; k++)
        {
            cout<<" ";
        }
        for (int j = 0; j <ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
}