#include<iostream>
#include<vector>
using namespace std;
int peakindex(vector<int>&input){
    int lo=0,hi=input.size()-1;
    int n=input.size();
    while (lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        if (mid==0)
        {
            if (input[mid]>input[mid+1])
            {
                return 0;
            }
            else return 1;
        }
        else if (mid==n-1)
        {
            if (input[mid]>input[mid-1])
            {
                return n-1;
            }
            else return n-2;
        }
        else{ 
            if (input[mid]>input[mid+1] and input[mid]>input[mid-1])
            {
                return mid;
            }
            else if (input[mid]>input[mid-1])
            {
                lo=mid+1;
            }
            else hi=mid-1;
        }
    }
    
}
int main(){
    int n;
    cout<<"Enter no. of elements: ",cin>>n;
    vector<int>input;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        input.push_back(ele);
    }
    cout<<"The index of peak element is "<<peakindex(input);
    return 0;
}