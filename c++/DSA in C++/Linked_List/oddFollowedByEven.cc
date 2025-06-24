#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int data){
        val=data;
        next=NULL;
    }
};
class LinkedList{
public:
    Node* head;
    LinkedList(){
        head=NULL;
    }
    void insertAtTheTail(int value){
        Node* new_node=new Node(value);
        if (head==NULL)
        {
            head=new_node;
            return;
        }
        Node* temp=head;
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=new_node;
    }
    void display(){
        Node* temp=head;
        while (temp!=NULL)
        {
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
Node* oddFollowedByEven(Node* &head){
    Node* evenhead=head->next;
    Node* oddptr=head;
    Node* evenptr=head->next;
    while (evenptr&&evenptr->next)
    {
        oddptr->next=oddptr->next->next;
        evenptr->next=evenptr->next->next;
        oddptr=oddptr->next;
        evenptr=evenptr->next;
    }
    oddptr->next=evenhead;
    return head;
}
int main(){
    LinkedList ll1,ll2;
    ll1.insertAtTheTail(1);
    ll1.insertAtTheTail(2);
    ll1.insertAtTheTail(3);
    ll1.insertAtTheTail(4);
    ll1.insertAtTheTail(5);
    ll1.insertAtTheTail(6);
    ll1.display();
    ll1.head=oddFollowedByEven(ll1.head);
    ll1.display();
    return 0;
}