#include<iostream>
#include<vector>
using namespace std;
int peakindex(vector<int>&input){
    int lo=0,hi=input.size()-1;
    // while (lo<=hi)
    // {
    //     int mid=lo+(hi-lo)/2;
    //     if (input[mid+1]<input[mid]>input[mid-1])
    //     {
    //         return mid;
    //     }
    //     if (input[mid]<input[mid+1])
    //     {
    //         lo=mid+1;
    //     }
    //     else hi=mid-1;
    // }
    int ans=-1;
    while (lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        if (input[mid]>input[mid-1] || input[mid]<input[mid+1])
        {
            ans=max(ans,mid);
            lo=mid+1;
        }
        else hi=mid-1;
    }
    return ans;
    
}
int main(){
    int n;
    cout<<"Enter no. of elements: ",cin>>n;
    vector<int>input(n);
    for (int i = 0; i <n; i++)
    {
        cin>>input[i];
    }
    cout<<"The peak index of given array is "<<peakindex(input)<<endl;
    return 0;
}