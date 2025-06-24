#include<iostream>
#include<stack>
using namespace std;
void copyStack(stack<int>st,stack<int>&result){
    if (st.empty())
    {
        return;
    }
    int curr=st.top();
    st.pop();
    copyStack(st,result);
    result.push(curr);
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