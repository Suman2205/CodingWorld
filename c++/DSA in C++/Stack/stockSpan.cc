#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int>pge(vector<int>&arr){
    int n=arr.size();
    vector<int>output(n,-1);
    stack<int>st;
    st.push(n-1);
    for (int i =n-2; i>=0; i--)
    {
        while (!st.empty()&&arr[i]>arr[st.top()])
        {
            output[st.top()]=i;
            st.pop();
        }
        st.push(i);
    }
    return output;
}
int main(){
    int n;
    cout<<"Enter no. of elements: ";
    cin>>n;
    vector<int>arr;
    for (int i = 0; i <n; i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    vector<int>ans=pge(arr);
    for (int i = 0; i <n; i++)
    {
        cout<<(i-ans[i])<<" ";
    }
    return 0;
}