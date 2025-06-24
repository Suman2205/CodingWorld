#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int data){
        this->val=data;
        this->next=NULL;
    }
};
class Stack{
    int capacity;
    int currSize;
    Node* head;
    public:
    Stack(int c){
        this->capacity=c;
        this->currSize=0;
        this->head=NULL;
    }
    void push(int data){
        Node* new_node=new Node(data);
        if (currSize==capacity)
        {
            cout<<"Overflow\n";
            return;
        }
        new_node->next=this->head;
        this->head=new_node;
        this->currSize++;
    }
    int pop(){
        if (this->head==NULL)
        {
            cout<<"Underflow\n";
            return INT16_MIN;
        }
        Node* temp=this->head;
        this->head=this->head->next;
        free(temp);
        this->currSize--;
    }
    int getTop(){
        return this->head->val;
    }
    int size(){
        return this->currSize;
    }
    bool isEmpty(){
        return this->head==NULL;
    }
    bool isFull(){
        return this->currSize==this->capacity;
    }
};
int main(){
    Stack s(5);
    s.pop();
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.getTop()<<endl;
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
    else cout<<"Some space is left in stack"<<endl;
    s.push(5);
    if (s.isFull())
    {
        cout<<"Stack is full"<<endl;
    }
    else cout<<"Some space is left in stack"<<endl;
    s.push(6);
    cout<<s.size()<<endl;
    s.pop();
    cout<<s.getTop()<<endl;
    s.pop();
    cout<<s.getTop()<<endl;
    cout<<s.size();
    return 0;
}