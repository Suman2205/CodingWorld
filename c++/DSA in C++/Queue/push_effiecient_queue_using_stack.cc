#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class Queue{
    stack<int>st;
public:
    Queue(){}
    void push(int x){
        st.push(x);
    }
    void pop(){
        stack<int>temp;
        while (st.size()>1)
        {
            temp.push(st.top());
            st.pop();
        }
        st.pop();
        while (!temp.empty())
        {
            st.push(temp.top());
            temp.pop();
        }
    }
    bool empty(){
        return st.size()==0;
    }
    int front(){
        stack<int>temp;
        while (st.size()>1)
        {
            temp.push(st.top());
            st.pop();
        }
        int result=st.top();
        while (!temp.empty())
        {
            st.push(temp.top());
            temp.pop();
        }
        return result;
    }
};
int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.pop();
    q.push(40);
    cout<<q.front()<<endl;
    while (!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}