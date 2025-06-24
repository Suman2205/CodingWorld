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
bool isPalindromeDLL(Node* head,Node* tail){
    while (head!=tail&&tail!=head->prev)
    {
        if (head->val!=tail->val)
        {
            return false;
        }
        head=head->next;
        tail=tail->prev;
    }
    return true;
}
int main(){
    DoublyLinkedList dll;
    dll.insertAtTail(1);
    dll.insertAtTail(2);
    dll.insertAtTail(4);
    dll.insertAtTail(2);
    dll.insertAtTail(1);
    if (isPalindromeDLL(dll.head,dll.tail))
    {
        cout<<"Given Doubly linked list is palindrome"<<endl;
    }
    else{
        cout<<"Given Doubly linked list is not palindrome"<<endl;
    }
    return 0;
}