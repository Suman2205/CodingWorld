#include<iostream>
#include<deque>
#include<vector>
using namespace std;
vector<int> max_window(vector<int>&arr,int k){
    deque<int>dq;
    vector<int>res;
    for (int i = 0; i <k; i++)
    {
        while (!dq.empty() && arr[dq.front()]<arr[i])
        {
            dq.pop_back();
        }
        dq.push_back(i); 
    }
    res.push_back(arr[dq.front()]);
    for (int i = k; i <arr.size(); i++)
    {
        int curr=arr[i];
        if (dq.front()==(i-k))
        {
            dq.pop_front();
        }
        while (!dq.empty() && arr[dq.front()]<arr[i])
        {
            dq.pop_back();
        }
        dq.push_back(i);
        res.push_back(arr[dq.front()]);
    }
    return res;
}
int main(){
    vector<int>arr={1,3,-1,-3,5,3,6,7};
    vector<int>res=max_window(arr,3);
    for (int i = 0; i <res.size(); i++)
    {
        cout<<res[i]<<" ";
    }
    return 0;
}