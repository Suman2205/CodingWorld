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
bool isPalindrome(Node* head){
    Node* slow=head;
    Node* fast=head;
    while (fast&&fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    Node* curr=slow->next;
    Node* prev=slow;
    slow->next=NULL;
    while (curr!=NULL)
    {
        Node* nextptr=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextptr;
    }
    Node* head1=head;
    Node* head2=prev;
    while (head2)
    {
        if (head1->val!=head2->val)
        {
            return false;
        }
        head1=head1->next;
        head2=head2->next;
    }
    return true;
}
int main(){
    LinkedList ll1,ll2;
    ll1.insertAtTheTail(1);
    ll1.insertAtTheTail(2);
    ll1.insertAtTheTail(3);
    ll1.insertAtTheTail(3);
    ll1.insertAtTheTail(2);
    ll1.insertAtTheTail(1);
    ll1.display();
    if (isPalindrome(ll1.head))
    {
        cout<<"The given list is palindrome"<<endl;
    }
    else cout<<"The given list is not palindrome"<<endl;
    return 0;
}