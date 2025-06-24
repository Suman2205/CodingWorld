#include<iostream>
#include<stack>
using namespace std;
void deleteFromBottom(stack<int>&st){
    stack<int>temp;
    while (st.size()>1)
    {
        int curr=st.top();
        st.pop();
        temp.push(curr);
    }
    st.pop();
    while (!temp.empty())
    {
        int curr=temp.top();
        temp.pop();
        st.push(curr);
    }
}
int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    deleteFromBottom(st);
    while (!st.empty())
    {
        cout<<st.top()<<"\n";
        st.pop();
    }
    return 0;
}