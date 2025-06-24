#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
typedef struct Node{
    int data;
    struct Node* next;
}Node;
struct Node* insertAtHead(struct Node* head,int val){
    if (head->data==0)
    {
        head=NULL;
    }
    struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
    new_node->data=val;
    new_node->next=head;
    return new_node;
}
struct Node* insertAtTheTail(struct Node* head,int val){
    struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
    new_node->data=val;
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp=head;
    while (temp->next)
    {
        temp=temp->next;
    }
    temp->next=new_node;
    new_node->next=NULL;
    return head;
}
struct Node* insertAtPosition(struct Node* head,int val,int pos){
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr=head;
    struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
    new_node->data=val;
    int i=0;
    while (i!=pos-1)
    {
        ptr=ptr->next;
        i++;
    }
    new_node->next=ptr->next;
    ptr->next=new_node;
    return head;
}
void display(struct Node* head){
    struct Node* temp=head;
    while (temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
    return;
}
int main(){
    struct Node* head;
    int n;
    printf("Enter no. of elements in lists: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        int ele;
        scanf("%d",&ele);
        head=insertAtHead(head,ele);
    }
    head=insertAtPosition(head,8,1);
    head=insertAtTheTail(head,10);
    display(head);
    return 0;
}