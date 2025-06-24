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
Node* middleElement(Node* head){
    Node* slow=head;
    Node* fast=head;
    while (fast&&fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
int main(){
    LinkedList ll1,ll2;
    ll1.insertAtTheTail(1);
    ll1.insertAtTheTail(2);
    ll1.insertAtTheTail(3);
    ll1.insertAtTheTail(4);
    ll1.insertAtTheTail(5);
    ll1.display();
    Node* MiddleNode=middleElement(ll1.head);
    cout<<MiddleNode->val<<endl;
    return 0;
}