#include<iostream>
#include<vector>
using namespace std;
int min(vector<int>&input){
    int lo=0;
    int hi=input.size()-1;
    if (input[lo]<input[hi])
    {
        return lo;
    }
    int mid=(lo+hi)/2;
    if (input[mid]>input[mid+1])
    {
        return mid+1;
    }
    if (input[mid]<input[mid-1]){
        return mid;
    }
    if (input[mid]>input[lo])
    {
        lo=mid+1;
    }
    else{
        hi=mid-1;
    }
}
int main(){
    int n;
    cout<<"Enter no. of elements: ",cin>>n;
    vector<int>input(n);
    for (int i = 0; i <n; i++)
    {
        cout<<"Enter "<<i<<"th index element: ",cin>>input[i];
    }
    cout<<"Index of minimum element is "<<min(input);
    return 0;
}