#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
class Queue{
public:
    Node* head;
    Node* tail;
    int size;
    Queue(){
        head=NULL;
        tail=NULL;
        size=0;
    }
    void enqueue(int val){
        Node* new_node=new Node(val);
        if (head==NULL)
        {
            head=new_node;
            tail=new_node;
            size++;
            return;
        }
        else{
            tail->next=new_node;
            tail=new_node;
        }
        size++;
    }
    void dequeue(){
        if (head==NULL)
        {
            cout<<"Queue is empty"<<endl;
            return;
        }
        Node* temp=head;
        head=head->next;
        if (head==NULL)
        {
            tail=NULL;
        }
        free(temp);
        size--;
    }
    int getsize(){
        return this->size;
    }
    bool isEmpty(){
        return head==NULL&&tail==NULL;
    }
    int front(){
        if (head==NULL)return -1;
        return this->head->data;
    }
};
int main(){
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.dequeue();
    q.dequeue();
    q.enqueue(5);
    cout<<q.getsize()<<endl;
    while (q.head!=NULL)
    {
        cout<<q.front()<<" ";
        q.dequeue();
    }
    return 0;
}