#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* prev;
    Node* next;
    Node(int data){
        val=data;
        prev=NULL;
        next=NULL;
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
    void insertAtHead(int val){
        Node* new_node=new Node(val);
        if (head==NULL)
        {
            head=new_node;
            tail=new_node;
            return;
        }
        new_node->next=head;
        head->prev=new_node;
        head=new_node;
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
    void insertAtPosition(int val,int k){
        Node* new_node=new Node(val);
        Node* temp=head;
        int count=1;
        while (count<k-1)
        {
            temp=temp->next;
            count++;
        }
        new_node->next=temp->next;
        temp->next=new_node;
        new_node->prev=temp;
        new_node->next->prev=new_node;
        return;
    }
};
int main(){
    DoublyLinkedList dll;
    dll.insertAtHead(1);
    dll.display();
    dll.insertAtHead(2);
    dll.display();
    dll.insertAtHead(3);
    dll.display();
    dll.insertAtTail(3);
    dll.display();
    dll.insertAtTail(2);
    dll.display();
    dll.insertAtTail(1);
    dll.display();
    dll.insertAtPosition(5,3);
    dll.display();
    return 0;
}