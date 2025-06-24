#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node* prev;
    Node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};
class doublyLL{
public:
    Node* head;
    Node* tail;
    doublyLL(){
        head=NULL;
        tail=NULL;
    }
    void insertAtTheHead(int val){
        Node* new_node=new Node(val);
        if(head==NULL){
            head=new_node;
            tail=new_node;
            return;
        }
        new_node->next=head;
        head->prev=new_node;
        head=new_node;
    }
    void insertAtTheTail(int val){
        Node* new_node=new Node(val);
        if(head==NULL){
            head=new_node;
            tail=new_node;
            return;
        }
        tail->next=new_node;
        new_node->prev=tail;
        tail=new_node;
    }
    void insertAtPosition(int val,int k){
        if (k==0)
        {
            insertAtTheHead(val);
            return;
        }
        Node* temp=head;
        for(int i=0;i<k-1;i++){
            temp=temp->next;
        }
        Node* new_node=new Node(val);
        new_node->next=temp->next;
        temp->next->prev=new_node;
        temp->next=new_node;
        new_node->prev=temp;
    }
    void deleteAtTheHead(){
        if(head==NULL){
            cout<<"Doubly Linked List is empty"<<endl;
            return;
        }
        if(head->next==NULL){
            cout<<"Deleted: "<<head->data<<endl;
            head=tail=NULL;
            return;
        }
        cout<<"Deleted: "<<head->data<<endl;
        Node* new_head=head->next;
        head->next->prev=NULL;
        head=new_head;
    }
    void deleteAtTheTail(){
        if(head==NULL){
            cout<<"Doubly Linked List is empty"<<endl;
            return;
        }
        if(head->next==NULL){
            cout<<"Deleted: "<<head->data<<endl;
            head=tail=NULL;
            return;
        }
        cout<<"Deleted: "<<tail->data<<endl;
        Node*  new_tail=tail->prev;
        tail->prev->next=NULL;
        tail=new_tail;
    }
    void deleteAtPosition(int k){
        if(k==0){
            deleteAtTheHead();
            return;
        }
        if(head==NULL){
            cout<<"Doubly Linked List is empty"<<endl;
            return;
        }
        Node* temp=head;
        for(int i=0;i<k-1;i++){
            temp=temp->next;
        }
        cout<<"Deleted: "<<temp->next->data<<endl;
        Node* t=temp->next->next;
        t->prev=temp->next;
        temp->next=t;
    }
    int search(int x){
        int k=0;
        Node* temp=head;
        while(temp!=NULL){
            if(temp->data==x){
                return k;
            }
            k++;
            temp=temp->next;
        }
        return -1;
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void rtraverse(){
        Node* temp=tail;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->prev;
        }
        cout<<endl;
    }
    int traverse(){
        Node* temp=head;
        int k=0;
        while(temp!=NULL){
            temp=temp->next;
            k++;
        }
        return k;
    }
};
int main(){
    doublyLL d;
    cout<<"Enter i for insertion(h for at head, t for at tail, p for at position)\n"
        <<"enter d for deletion(h for at head,t for at tail, p for at position)\n"
        <<"Enter p for printing all elements of doubly linked list\n"
        <<"Enter t for forward traversing and counting the doubly linked list\n"
        <<"Enter r for reverse traversing\n"
        <<"Enter s for searching any element in doubly linked list\n"
        <<"Enter e for exit\n";
    while(true){
        char c;
        cout<<"Enter your choice for operation: ";
        cin>>c;
        switch (c)
        {
        case 'i':
            char c1;
            cout<<"Enter choice for insertion: ";
            cin>>c1;
            switch (c1)
            {
                case 'h':
                    cout<<"Enter the element: ";
                    int v1;
                    cin>>v1;
                    d.insertAtTheHead(v1);
                    break;
                case 't':
                    cout<<"Enter the element: ";
                    int v2;
                    cin>>v2;
                    d.insertAtTheTail(v2);
                    break;
                case 'p':
                    cout<<"Enter the element: ";
                    int v3;
                    cin>>v3;
                    cout<<"Enter the index: ";
                    int p1;
                    cin>>p1;
                    d.insertAtPosition(v3,p1);
                    break;
                default:
                    cout<<"Invalid choice"<<endl;
                    break;
            }
            break;
        case 'd':
            char c2;
            cout<<"Enter choice for deletion: ";
            cin>>c2;
            switch (c2)
            {
                case 'h':
                    d.deleteAtTheHead();
                    break;
                case 't':
                    d.deleteAtTheTail();
                    break;
                case 'p':
                    cout<<"Enter the index: ";
                    int p2;
                    cin>>p2;
                    d.deleteAtPosition(p2);
                    break;
                default:
                    cout<<"Invalid choice"<<endl;
                    break;
            }
            break;
        case 'p':
            cout<<"ELements in the list: ";
            d.display();
            break;
        case 's':
            cout<<"Enter element which you want to search in list: ";
            int x;
            cin>>x;
            cout<<x<<" is present in list at index "<<d.search(x)<<endl;
            break;
        case 't':
            cout<<"Total no. of elements in the list: "<<d.traverse()<<endl;
            break;
        case 'r':
            cout<<"Element in reverse order: ";
            d.rtraverse();
            break;
        case 'e':
            exit(1);
        default:
            cout<<"Invalid Choice"<<endl;
            break;
        }
    }
    return 0;
}