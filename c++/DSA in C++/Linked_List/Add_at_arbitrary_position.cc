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
void insertAtTheHead(Node* &head,int val){
    Node* new_node=new Node(val);
    new_node->next=head;
    head=new_node;
}
void insertAtPosition(Node* &head,int val,int pos){
    Node* new_node=new Node(val);
    if (pos==0)
    {
        insertAtTheHead(head,val);
        return;
    }
    Node* temp=head;
    int current_pos=0;
    while (current_pos!=pos-1)
    {
        temp=temp->next;
        current_pos++;
    }
    new_node->next=temp->next;
    temp->next=new_node;
}
void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    Node* head=new Node(1);
    insertAtPosition(head,2,1);
    display(head);
    insertAtPosition(head,3,2);
    display(head);
    insertAtPosition(head,4,2);
    display(head);
    return 0;
}