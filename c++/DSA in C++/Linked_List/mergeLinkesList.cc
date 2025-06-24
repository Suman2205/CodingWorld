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
Node* mergeLinkedList(Node* &head1,Node* &head2){
    Node* dummyHeadNode=new Node(-1);
    Node* ptr1=head1;
    Node* ptr2=head2;
    Node* ptr3=dummyHeadNode;
    while (ptr1&&ptr2)
    {
        if (ptr1->val<ptr2->val)
        {
            ptr3->next=ptr1;
            ptr1=ptr1->next;
        }
        else{
            ptr3->next=ptr2;
            ptr2=ptr2->next;
        }
        ptr3=ptr3->next;
    }
    if (ptr1)
    {
        ptr3->next=ptr1;
    }
    else{
        ptr3->next=ptr2;
    }
    return dummyHeadNode->next;
}
int main(){
    LinkedList ll1,ll2;
    ll1.insertAtTheTail(1);
    ll1.insertAtTheTail(4);
    ll1.insertAtTheTail(5);
    ll1.display();
    ll2.insertAtTheTail(2);
    ll2.insertAtTheTail(3);
    ll2.insertAtTheTail(6);
    ll2.display();
    LinkedList mergeLL;
    mergeLL.head=mergeLinkedList(ll1.head,ll2.head);
    mergeLL.display();
    return 0;
}