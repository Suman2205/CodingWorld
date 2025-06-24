#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void reverse(queue<int>&q){
    stack<int>st;
    while (!q.empty())
    {
        int temp=q.front();
        q.pop();
        st.push(temp);
    }
    while (!st.empty())
    {
        int temp=st.top();
        st.pop();
        q.push(temp);
    }
}
int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    reverse(q);
    while (!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}