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
int getLength(Node* head){
    int length=0;
    Node* temp=head;
    while (temp)
    {
        length++;
        temp=temp->next;
    }
    return length;
}
Node* moveheadByK(Node* head,int k){
    Node* ptr=head;
    while (k--)
    {
        ptr=ptr->next;
    }
    return ptr;
}
Node* intersectionLists(Node* head1,Node* head2){
    int l1=getLength(head1);
    int l2=getLength(head2);
    Node* ptr1=head1;
    Node* ptr2=head2;
    if (l1>l2)
    {
        int k=l1-l2;
        ptr1=moveheadByK(head1,k);
    }
    else{
        int k=l2-l1;
        ptr2=moveheadByK(head2,k);
    }
    while (ptr1)
    {
        if (ptr1==ptr2)
        {
            return ptr1;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return NULL;
}
int main(){
    LinkedList ll1,ll2;
    ll1.insertAtTheTail(1);
    ll1.insertAtTheTail(2);
    ll1.insertAtTheTail(3);
    ll1.insertAtTheTail(4);
    ll1.insertAtTheTail(5);
    ll2.insertAtTheTail(6);
    ll2.insertAtTheTail(7);
    ll1.display();
    ll2.display();
    ll2.head->next=ll1.head->next->next->next;
    Node* intersection=intersectionLists(ll1.head,ll2.head);
    if (intersection)
    {
        cout<<intersection->val<<endl;
    }
    else{
        cout<<"NULL"<<endl;
    }
    return 0;
}