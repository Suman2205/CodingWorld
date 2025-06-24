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
    void insertAtEnd(int val);
    void deleteAtStart();
    void deleteAtEnd();
    void deleteAtPosition(int k);
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
void CircularLinkedList :: deleteAtStart(){
    if (head==NULL) return;
    Node* temp=head;
    Node* tail=head;
    while (tail->next!=head)
    {
        tail=tail->next;
    }
    head=head->next;
    tail->next=head;
    free(temp);
}
void CircularLinkedList :: deleteAtEnd(){
    if (head==NULL) return;
    Node* tail=head;
    while (tail->next->next!=head)
    {
        tail=tail->next;
    }
    Node* temp=tail->next;
    tail->next=head;
    free(temp);
}
void CircularLinkedList :: deleteAtPosition(int k){
    Node* prev=head;
    int count=1;
    while (count<k-1)
    {
        prev=prev->next;
        count++;
    }
    Node* temp=prev->next;
    prev->next=temp->next;
    free(temp);
}
int main(){
    CircularLinkedList cll;
    cll.insertAtEnd(1);
    cll.insertAtEnd(2);
    cll.insertAtEnd(3);
    cll.insertAtEnd(4);
    // cll.display();
    // cll.printCircular();
    // cll.deleteAtStart();
    // cll.display();
    // cll.printCircular();
    // cll.deleteAtEnd();
    // cll.display();
    // cll.printCircular();
    cll.deleteAtPosition(3);
    cll.display();
    cll.printCircular();
    return 0;
}