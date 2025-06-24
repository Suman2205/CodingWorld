#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node* prev;
    Node(int data){
        val=data;
        next=NULL;
        prev=NULL;
    }
};
class DoublyLinkedList{
public:
    Node* head;
    Node* tail;
    DoublyLinkedList(){
        head=NULL;
        tail=NULL;
    }
    void display(){
        Node* temp=head;
        while (temp!=NULL)
        {
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
        return;
    }
    void insertAtTail(int val){
        Node* new_node=new Node(val);
        if (tail==NULL)
        {
            head=new_node;
            tail=new_node;
            return;
        }
        tail->next=new_node;
        new_node->prev=tail;
        tail=new_node;
        return;
    }
};
void reverseDLL(Node* &head,Node* &tail){
    Node* currNode=head;
    while (currNode)
    {
        Node* nextPtr=currNode->next;
        currNode->next=currNode->prev;
        currNode->prev=nextPtr;
        currNode=nextPtr;;
    }
    Node* new_head=tail;
    tail=head;
    head=new_head;
    return;
}
int main(){
    DoublyLinkedList dll;
    dll.insertAtTail(1);
    dll.insertAtTail(2);
    dll.insertAtTail(3);
    dll.insertAtTail(4);
    dll.display();
    reverseDLL(dll.head,dll.tail);
    dll.display();
    return 0;
}