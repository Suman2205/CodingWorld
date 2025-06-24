#include<iostream>
#include<stack>
using namespace std;
void copyStack(stack<int>st,stack<int>&result){
    stack<int>temp;
    while (!st.empty())
    {
        int curr=st.top();
        st.pop();
        temp.push(curr);
    }
    while (!temp.empty())
    {
        int curr=temp.top();
        temp.pop();
        result.push(curr);
    }
    return;
}
int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    stack<int>res;
    copyStack(st,res);
    while (!res.empty())
    {
        cout<<res.top()<<"\n";
        res.pop();
    }
    return 0;
}