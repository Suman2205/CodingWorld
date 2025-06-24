#include<iostream>
#include<vector>
using namespace std;
void first(vector<int>&input,int target,vector<int>&ans){
    int lo=0;
    int hi=input.size()-1;
    while (lo<=hi)
    {
        int mid=(lo+hi)/2;
        if (input[mid]>=target)
        {
            ans[0]=mid;
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    return;
}
void last(vector<int>&input,int target,vector<int>&ans){
    int lo=0;
    int hi=input.size()-1;
    while (lo<=hi)
    {
        int mid=(lo+hi)/2;
        if (input[mid]<=target)
        {
            ans[1]=mid;
            lo=mid+1;
        }
        else{
            hi=mid-1;
        }
    }
    return;
}
int main(){
    int n;
    cout<<"Enter no. of elements: ",cin>>n;
    vector<int>input(n);
    for (int i = 0; i <n; i++)
    {
        cout<<"Enter "<<i<<"th index element: ",cin>>input[i];
    }
    int target;
    cout<<"Enter target element: ",cin>>target;
    vector<int>ans(2,-1);
    first(input,target,ans);
    last(input,target,ans);
    for (int i = 0; i <2; i++)
    {
        if (input[ans[i]]==target)
        {
            cout<<ans[i]<<" ";
        }
        else{
            ans[i]=-1;
            cout<<ans[i]<<" ";
        }
    }
    return 0;
}