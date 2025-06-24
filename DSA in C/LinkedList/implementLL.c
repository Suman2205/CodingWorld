#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node* next;
}Node;
void implement(Node* head,int val){
    head=(Node* )malloc(sizeof(Node));
    head->data=val;
}
void insertAtHead(Node* head,int val){
    Node* new_node;
    implement(new_node,val);
    if (head==NULL)
    {
        head=new_node;
    }
    new_node->next=head;
    head=new_node;
    return;
}
void display(Node* head){
    Node* temp=(Node*)malloc(sizeof(Node));
    temp=head;
    while (temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    
}
int main(){
    Node* head;
    implement(head,0);
    insertAtHead(head,3);
    insertAtHead(head,4);
    insertAtHead(head,5);
    display(head);
    printf("%d ",head->data);
    return 0;
}