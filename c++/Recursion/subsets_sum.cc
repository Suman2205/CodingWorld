#include<iostream>
#include<vector>
using namespace std;
void sums(int *arr, int n, int i,int sum, vector<int>&result){
    if (i==n)
    {
        result.push_back(sum);
        return;
    }
    sums(arr,n,i+1,sum+arr[i],result);
    sums(arr,n,i+1,sum,result);
}
int main(){
    int arr[]={3,2,5};
    int n=3;
    vector<int>result;
    sums(arr,n,0,0,result);
    for (int i = 0; i <result.size(); i++)
    {
        cout<<result[i]<<" ";
    }
    return 0; 
}