#include<iostream>
#include<vector>
using namespace std;
bool canDistChoco(vector<int>&arr,int mid,int s){
    int n=arr.size();
    int StudentsReq=1;
    int currsum=0;
    for (int i = 0; i <n; i++)
    {
        if (arr[i]>mid) return false;
        if (currsum+arr[i]>mid)
        {
            StudentsReq++;
            currsum=arr[i];
            if (StudentsReq>s) return false;
        }
        else{
            currsum+=arr[i];
        }
    }
    return true;
}
int distChoco(vector<int>&arr,int s){
    int lo=arr[0];
    int hi=0;
    for (int i = 0; i <arr.size(); i++)
    {
        hi+=arr[i];
    }
    int ans=-1;
    while (lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        if (canDistChoco(arr,mid,s))
        {
            ans=mid;
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter no. of boxes: ",cin>>n;
    vector<int>arr;
    for (int i = 0; i <n; i++)
    {
       int ele;
       cin>>ele;
       arr.push_back(ele);
    }
    int s;
    cout<<"Enter no. of students: ",cin>>s;
    cout<<"The maximum no. of chocolates a student can get that is minimum out of all possible cases of distribution is "<<distChoco(arr,s)<<endl;
    return 0;
}