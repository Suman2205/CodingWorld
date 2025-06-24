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
Node* rotateKtimes(Node* &head,int k){
    int n=0;
    Node* tail=head;
    while (tail->next)
    {
        n++;
        tail=tail->next;
    }
    n++;
    tail->next=head;
    k=k%n;
    if (k==0) return head;
    Node* temp=head;
    for (int i = 1; i <n-k; i++)
    {
        temp=temp->next;
    }
    Node* newhead=temp->next;
    temp->next=NULL;
    return newhead;
}
int main(){
    LinkedList ll1,ll2;
    ll1.insertAtTheTail(1);
    ll1.insertAtTheTail(2);
    ll1.insertAtTheTail(3);
    ll1.insertAtTheTail(4);
    ll1.insertAtTheTail(5);
    ll1.insertAtTheTail(6);
    ll1.display();
    int k;
    cout<<"Enter no. of times you want to rotate: ";
    cin>>k;
    ll1.head=rotateKtimes(ll1.head,k);
    ll1.display();
    return 0;
}