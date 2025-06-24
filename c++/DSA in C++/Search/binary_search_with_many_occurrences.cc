#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int>&input,int target,int lo,int hi){
    if (lo>hi) return -1;
    int mid=(lo+hi)/2;
    if (input[mid]==target&&input[mid-1]!=target) return mid;
    else if (input[mid]<target)
    {
        return binarySearch(input,target,mid+1,hi);
    }
    else
    {
        return binarySearch(input,target,lo,mid-1);
    }
}
int main(){
    int n;
    cout<<"Enter no. of elements: ",cin>>n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter "<<i<<"th index element:",cin>>v[i];
    }
    int target;
    cout<<"Enter the element which you want to search in array: ",cin>>target;
    cout<<"The index of target element is: "<<binarySearch(v,target,0,n-1)<<endl;
    return 0;

}