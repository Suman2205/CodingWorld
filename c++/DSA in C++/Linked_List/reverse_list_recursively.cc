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
Node* reversellRecursion(Node* &head){
    if(head==NULL|| head->next==NULL){
        return head;
    }
    Node* new_head=reversellRecursion(head->next);
    head->next->next=head;
    head->next=NULL;
    return new_head;
}
int main(){
    LinkedList ll;
    int n;
    cout<<"Enter no. of elements in list: ",cin>>n;
    for (int i = 0; i <n; i++)
    {
        int ele;
        cin>>ele;
        ll.insertAtTheTail(ele);
    }
    ll.display();
    ll.head=reversellRecursion(ll.head);
    ll.display();
    return 0;
}