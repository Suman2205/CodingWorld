#include<iostream>
#include<stack>
using namespace std;
class Queue{
    stack<int>st;
public:
    Queue(){}
    void push(int x){
        stack<int>temp;
        while (!st.empty())
        {
            temp.push(st.top());
            st.pop();
        }
        st.push(x);
        while (!temp.empty())
        {
            st.push(temp.top());
            temp.pop();
        }
    }
    void pop(){
        st.pop();
    }
    bool empty(){
        return st.size()==0;
    }
    int front(){
        return st.top();
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