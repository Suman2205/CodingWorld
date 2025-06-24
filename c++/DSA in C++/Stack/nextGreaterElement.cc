#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int>nge(vector<int>&arr){
    int n=arr.size();
    vector<int>output(arr.size(),-1);
    stack<int>st;
    st.push(0);
    for (int i = 1; i <n; i++)
    {
        while (!st.empty()&&arr[i]>arr[st.top()])
        {
            output[st.top()]=arr[i];
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
    vector<int>output=nge(arr);
    for (int i = 0; i < output.size(); i++)
    {
        cout<<output[i]<<" ";
    }
    return 0;
}