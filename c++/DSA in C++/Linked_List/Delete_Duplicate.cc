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
void deleteDuplicate(Node* &head){
    Node* curr=head;
    while (curr!=NULL)
    {
        while (curr->next&&curr->val==curr->next->val)
        {
            Node* temp=curr->next;
            curr->next=curr->next->next;
            free(temp);
        }
        curr=curr->next;
    }
    
}
int main(){
    LinkedList ll;
    int n;
    cout<<"Enter no. of elements in lists: ",cin>>n;
    for (int i = 0; i <n; i++)
    {
        int ele;
        cin>>ele;
        ll.insertAtTheTail(ele);
        ll.display();
    }
    deleteDuplicate(ll.head);
    ll.display();
    return 0;
}