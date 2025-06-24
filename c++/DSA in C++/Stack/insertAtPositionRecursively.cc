#include<iostream>
#include<stack>
using namespace std;
void insertAtPosition(stack<int>&st,int x,int pos){
    int count=0;
    if (count==st.size()-pos)
    {
        st.push(x);
        return;
    }
    int curr=st.top();
    st.pop();
    count++;
    insertAtPosition(st,x,pos);
    st.push(curr);
}
int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    insertAtPosition(st,6,1);
    while (!st.empty())
    {
        cout<<st.top()<<"\n";
        st.pop();
    }
    return 0;
}