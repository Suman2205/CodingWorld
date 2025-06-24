#include<iostream>
using namespace std;
const int c=100;
class stack{
    int* arr;
    int capacity;
    int top;
public:
    stack(int c){
        capacity=c;
        arr=new int[capacity];
        top=-1;
    }
    void push(int x){
        if (top+1==capacity)
        {
            cout<<"Overflow"<<endl;
        }
        top=top+1;
        arr[top]=x;
    }
    void pop(){
        if (top==-1)
        {
            cout<<"Underflow"<<endl;
        }
        int item=arr[top];
        top--;
    }
    int getTop(){
        return arr[top];
    }
    int getSize(){
        return top+1;
    }
    bool empty(){
        return top==-1;
    }
    bool full(){
        return capacity==top+1;
    }
};
int main(){
    stack s(c);
    int n;
    cout<<"Enter no. of elements you want to push into stack: ";
    cin>>n;
    cout<<"Enter elements: "<<endl;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        s.push(data);
    }
    int m;
    cout<<"Enter no. of elements you want to pop out from stack: ";
    cin>>m;
    for (int i = 0; i <m; i++)
    {
        s.pop();
    }
    cout<<"At this time, the top element of stack is "<<s.getTop()<<endl;
    cout<<"At this time, the size of stack is "<<s.getSize()<<endl;
    if (s.full()){
        cout<<"At this time, Stack is full"<<endl;
    }
    else{
        cout<<"At this time, Stack is not completely fill"<<endl;
    }
    if(s.empty()){
        cout<<"At this time, Stack is empty"<<endl;
    }
    else{
        cout<<"At this time, Stack contains some elements"<<endl;
    }
    cout<<"Printing all the elements of stack in reverse order: "<<endl;
    while (!s.empty())
    {
        cout<<s.getTop()<<" ";
        s.pop();
    }
    return 0;
}