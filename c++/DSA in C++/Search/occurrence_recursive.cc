#include<iostream>
#include<vector>
using namespace std;
void firstandlast(vector<int>&input,int target,int lo,int hi,vector<int>&ans){
    if (lo>hi) return;
    int mid=(lo+hi)/2;
    if (input[mid]==target){
        if (input[mid-1]!=target)
        {
            ans[0]=mid;
        }
        else{
            firstandlast(input,target,lo,mid-1,ans);
        }
        
    }
    if (input[mid]==target)
    {
        if (input[mid+1]!=target)
        {
            ans[1]=mid;
        }
        else{
            firstandlast(input,target,mid+1,hi,ans);
        }
    }
    else if (input[mid]<target)
    {
        firstandlast(input,target,mid+1,hi,ans);
    }
    else
    {
        firstandlast(input,target,lo,mid-1,ans);
    }
}
int main(){
    int n;
    cout<<"Enter no. of elements: ",cin>>n;
    vector<int>v(n);
    for (int i = 0; i <n; i++)
    {
        cout<<"Enter "<<i<<"th index element: ",cin>>v[i];
    }
    int target;
    cout<<"Enter target element: ",cin>>target;
    vector<int>ans(2,-1);
    firstandlast(v,target,0,n-1,ans);
    for (int i = 0; i < 2; i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}