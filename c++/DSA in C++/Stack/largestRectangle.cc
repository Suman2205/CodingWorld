#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int largestRectangle(vector<int>&arr){
    int n=arr.size();
    int ans=INT16_MIN;
    stack<int>st;
    st.push(0);
    for (int i = 0; i <n; i++)
    {
        while (!st.empty()&&arr[i]<arr[st.top()])
        {
            int ele=arr[st.top()];
            int nse=i;
            st.pop();
            int pse=st.empty()?-1:st.top();
            ans=max(ans,ele*(nse-pse-1));
        }
        st.push(i);
    }
    while (!st.empty())
    {
        int ele=arr[st.top()];
        int nse=n;
        st.pop();
        int pse=st.empty()?-1:st.top();
        ans=max(ans,ele*(nse-pse-1));
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter no. of elements: ";
    cin>>n;
    vector<int>v;
    for (int i = 0; i <n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int ans=largestRectangle(v);
    cout<<ans<<endl;
    return 0;
}