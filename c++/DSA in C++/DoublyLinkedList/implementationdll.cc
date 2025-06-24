#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* prev;
    Node* next;
    Node(int data){
        val=data;
        prev=NULL;
        next=NULL;
    }
};
class doublyLinkedList{
public:
    Node* head;
    Node* tail;
    doublyLinkedList(){
        head=NULL;
        tail=NULL;
    }
};
int main(){
    Node* new_node=new Node(3);
    doublyLinkedList dll;
    dll.head=new_node;
    dll.tail=new_node;
    cout<<dll.head->val<<endl;
    return 0;
}