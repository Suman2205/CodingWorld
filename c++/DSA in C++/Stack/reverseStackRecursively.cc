#include<iostream>
#include<stack>
using namespace std;
void insertAtBottom(stack<int>&st,int x){
    if (st.empty())
    {
        st.push(x);
        return;
    }
    int curr=st.top();
    st.pop();
    insertAtBottom(st,x);
    st.push(curr);
}
void reverseStack(stack<int>&st){
    if(st.empty())return;
    int curr=st.top();
    st.pop();
    reverseStack(st);
    insertAtBottom(st,curr);
}
int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    reverseStack(st);
    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}
