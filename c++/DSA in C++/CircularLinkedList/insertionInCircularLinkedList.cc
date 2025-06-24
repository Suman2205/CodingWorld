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
class CircularLinkedList{
public:
    Node* head;
    CircularLinkedList(){
        head=NULL;
    }
    void display(){
        Node* temp=head;
        do
        {
            cout<<temp->val<<"->";
            temp=temp->next;
        } while (temp!=head);
        cout<<endl;
    }
    void printCircular(){
        Node* temp=head;
        for (int i = 0; i <15; i++)
        {
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<endl;
    }
    void insertAtStart(int val){
        Node* new_node=new Node(val);
        if (head==NULL)
        {
            head=new_node;
            new_node->next=head;
        }
        new_node->next=head;
        Node* tail=head;
        while (tail->next!=head)
        {
            tail=tail->next;
        }
        tail->next=new_node;
        head=new_node;
    }
    void insertAtEnd(int val);
    void insertAtPosition(int val,int k);
};
void CircularLinkedList :: insertAtEnd(int val){
    Node* new_node=new Node(val);
    if (head==NULL)
    {
        head=new_node;
        new_node->next=head;
    }
    Node* tail=head;
    while (tail->next!=head)
    {
        tail=tail->next;
    }
    tail->next=new_node;
    new_node->next=head;
}
void CircularLinkedList :: insertAtPosition(int val,int k){
    Node* new_node=new Node(val);
    int count=0;
    Node* temp=head;
    while (count<k-1)
    {
        temp=temp->next;
        count++;
    }
    new_node->next=temp->next;
    temp->next=new_node;
}
int main(){
    CircularLinkedList cll;
    cll.insertAtStart(1);
    cll.insertAtStart(2);
    cll.insertAtStart(3);
    cll.display();
    cll.printCircular();
    cll.insertAtEnd(1);
    cll.insertAtEnd(2);
    cll.insertAtEnd(3);
    cll.display();
    cll.printCircular();
    cll.insertAtPosition(4,2);
    cll.display();
    cll.printCircular();
    return 0;
}