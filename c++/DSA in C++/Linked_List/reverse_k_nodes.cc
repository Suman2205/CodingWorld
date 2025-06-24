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
Node* reverseKnodes(Node* &head,int k){
    Node* prevptr=NULL;
    Node* currptr=head;
    int counter=0;
    while (counter<k&&currptr!=NULL)
    {
        Node* nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        counter++;
    }
    if (currptr!=NULL)
    {
        Node* new_head=reverseKnodes(currptr,k);
        head->next=new_head;
    }
    return prevptr;
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
    int k;
    cout<<"Enter no. of nodes at a times reversed: ",cin>>k;
    ll.head=reverseKnodes(ll.head,k);
    ll.display();
    return 0;
}