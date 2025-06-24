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
void insertAtTheTail(Node* &head,int val){
    Node* new_node=new Node(val);
    Node* temp=head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new_node;
}
void display(Node* head){
    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    Node* head=new Node(1);
    insertAtTheTail(head,2);
    display(head);
    insertAtTheTail(head,3);
    display(head);
    insertAtTheTail(head,4);
    display(head);
    return 0;
}