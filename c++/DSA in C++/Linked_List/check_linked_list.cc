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
bool checkEqualLinkedList(Node* head1,Node* head2){
    Node* ptr1=head1;
    Node* ptr2=head2;
    while (ptr1!=NULL&&ptr2!=NULL)
    {
        if (ptr1->val!=ptr2->val)
        {
            return false;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return (ptr1==NULL&&ptr2==NULL);
}
int main(){
    LinkedList ll1,ll2;
    ll1.insertAtTheTail(1);
    ll1.insertAtTheTail(2);
    ll1.insertAtTheTail(3);
    ll1.display();
    ll2.insertAtTheTail(1);
    ll2.insertAtTheTail(2);
    ll2.insertAtTheTail(3);
    ll1.display();
    if(checkEqualLinkedList(ll1.head,ll2.head)){
        cout<<"Linked Lists are same";
    }
    else{
        cout<<"Linked Lists are not same";
    }
    return 0;
}