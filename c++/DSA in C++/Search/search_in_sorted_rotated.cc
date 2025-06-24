#include<iostream>
#include<vector>
using namespace std;
int searchinsortedrotared(vector<int>&input,int target){
    int lo=0,hi=input.size()-1;
    while (lo<=hi)
    {
        int  mid=lo+(hi-lo)/2;
        if(input[mid]==target) return mid;
        if (input[mid]>=input[lo])
        {
            if(input[mid]>=target&&input[lo]<=target){
                hi=mid-1;
            }
            else lo=mid+1;
        }
        if (input[mid]<=input[hi])
        {
            if (input[mid]<=target&&input[hi]>=target)
            {
                lo=mid+1;
            }
            else hi=mid-1;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter no. of elements: ",cin>>n;
    vector<int>input(n);
    for (int i = 0; i < n; i++)
    {
        cin>>input[i];
    }
    int target;
    cout<<"Enter the element which you want to find in given array: ",cin>>target;
    cout<<"The index of target element is "<<searchinsortedrotared(input,target);
    return 0;
}