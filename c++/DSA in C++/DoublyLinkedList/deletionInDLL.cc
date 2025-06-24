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
    void deleteAtStart(){
        if (head==NULL) return;
        Node* temp=head;
        head=head->next;
        if (head==NULL)
        {
            tail=NULL;
        }
        else{
            head->prev=NULL;
        }
        free(temp);
        return;
    }
    void deleteAtEnd(){
        if (tail==NULL) return;
        Node* temp=tail;
        tail=tail->prev;
        if (tail==NULL)
        {
            head=NULL;
        }
        else{
            tail->next=NULL;
        }
        free(temp);
        return;
    }
    void deleteAtPosition(int k){
        Node* temp=head;
        int count=1;
        while (count<k)
        {
            temp=temp->next;
            count++;
        }
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        free(temp);
        return;
    }
};
int main(){
    DoublyLinkedList dll;
    dll.insertAtTail(1);
    dll.display();
    dll.insertAtTail(2);
    dll.display();
    dll.insertAtTail(3);
    dll.display();
    dll.deleteAtPosition(2);
    dll.display();
    dll.deleteAtStart();
    dll.display();
    dll.deleteAtEnd();
    dll.display();
    return 0;
}