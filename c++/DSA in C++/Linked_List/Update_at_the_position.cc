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
void updateAtPosition(Node* &head,int val, int k){
    Node* temp=new Node(val);
    int curr_pos=0;
    while (curr_pos!=k)
    {
        temp=temp->next;
    }
    temp->val=val;
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
    insertAtTheHead(head,2);
    display(head);
    insertAtTheHead(head,3);
    display(head);
    insertAtTheHead(head,4);
    display(head);
    updateAtPosition(head,5,3);
    return 0;
}