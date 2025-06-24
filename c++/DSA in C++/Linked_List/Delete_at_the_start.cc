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
void DeleteAtTheStart(Node* &head){
    Node* temp=head;
    head=head->next;
    free(temp);
}
int main(){
    LinkedList ll;
    int n;
    cout<<"No. of elements in want to in your list: ",cin>>n;
    cout<<"Enter your list elements: "<<endl;
    for (int i = 1; i <=n; i++)
    {
        int ele;
        cin>>ele;
        ll.insertAtTheTail(ele);
    }
    ll.display();
    DeleteAtTheStart(ll.head);
    ll.display();
    return 0;
}