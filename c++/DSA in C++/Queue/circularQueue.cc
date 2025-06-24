#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class Queue{
    vector<int>v;
    int front;
    int back;
    int cs;
    int ts;
public:
    Queue(int n){
        v.resize(n);
        ts=n;
        front=0;
        back=n-1;
        cs=0;
    }
    void push(int x){
        if (isFull()) return;
        back=(back+1)%ts;
        v[back]=x;
        cs++;
    }
    void pop(){
        if(isEmpty()) return;
        front=(front+1)%ts;
        cs--;
    }
    bool isFull(){
        return cs==ts;
    }
    bool isEmpty(){
        return cs==0;
    }
    int getfront(){
        return v[front];
    }
};
int main(){
    Queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.pop();
    q.push(40);
    cout<<q.getfront()<<endl;
    while (!q.isEmpty())
    {
        cout<<q.getfront()<<" ";
        q.pop();
    }
    return 0;
}