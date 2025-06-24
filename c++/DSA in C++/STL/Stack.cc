#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.top()<<endl;
    s.push(4);
    if (s.empty())
    {
        cout<<"Stack is empty"<<endl;
    }
    else cout<<"Some elements are present in stack"<<endl;
    s.push(5);
    s.push(6);
    cout<<s.size()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.size();
    return 0;
    unsigned int n=0;
}