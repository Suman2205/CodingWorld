#include<iostream>
#include<stack>
using namespace std;
void deleteFromBottom(stack<int>&st,int size,int idx){
    if (st.size()==idx+1)
    {
        st.pop();
        return;
    }
    int curr=st.top();
    st.pop();
    deleteFromBottom(st,size,idx);
    st.push(curr);
}
int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    deleteFromBottom(st,st.size(),3);
    while (!st.empty())
    {
        cout<<st.top()<<"\n";
        st.pop();
    }
    return 0;
}