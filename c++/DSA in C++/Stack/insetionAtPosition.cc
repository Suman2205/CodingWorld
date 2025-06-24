#include<iostream>
#include<stack>
using namespace std;
void insertAtPosition(stack<int>&st,int x,int pos){
    int count=0;
    stack<int>temp;
    while (count<st.size()-pos)
    {
        int curr=st.top();
        st.pop();
        temp.push(curr);
    }
    st.push(x);
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
    insertAtPosition(st,6,3);
    while (!st.empty())
    {
        cout<<st.top()<<"\n";
        st.pop();
    }
    return 0;
}