#include<iostream>
using namespace std;
class Stack{
    int capacity;
    int* arr;
    int top;
    public:
    Stack(int c){
        this->capacity=c;
        arr=new int[c];
        this->top=-1;
    }
    void push(int data){
        if (this->top==this->capacity-1)
        {
            cout<<"Overflow\n";
            return;
        }
        this->top++;
        arr[this->top]=data;
    }
    int pop(){
        if (this->top==-1)
        {
            cout<<"Underflow\n";
            return INT16_MIN;
        }
        this->top--;
    }
    bool isEmpty(){
        return this->top==-1;
    }
    bool isFull(){
        return this->top==this->capacity-1;
    }
    int getTop(){
        return arr[this->top];
    }
    int size(){
        return this->top+1;
    }
};
int main(){
    Stack s(5);
    s.pop();
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    if (s.isEmpty())
    {
        cout<<"Stack is empty"<<endl;
    }
    else cout<<"There is some elements present in stack"<<endl;
    if (s.isFull())
    {
        cout<<"Stack is full"<<endl;
    }
    cout<<"Some space is left in stack"<<endl;
    s.push(5);
    s.push(6);
    s.pop();
    s.pop();
    cout<<s.getTop()<<endl;
    cout<<s.size();
    return 0;
}