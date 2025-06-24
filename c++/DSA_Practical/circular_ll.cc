#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
class circularLL{
public:
    Node* head;
    circularLL(){
        head=NULL;
    }
    void insertAtTheHead(int val){
        Node* new_node=new Node(val);
        if(head==NULL){
            head=new_node;
            head->next=head;
            return;
        }
        new_node->next=head;
        head=new_node;
    }
    void insertAtTheTail(int val){
        Node* new_node=new Node(val);
        if(head==NULL){
            head=new_node;
            head->next=head;
            return;
        }
        Node* temp=head;
        while (temp->next!=head)
        {
            temp=temp->next;
        }
        temp->next=new_node;
        new_node->next=head;
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
        temp->next=new_node;
    }
    void deleteAtTheHead(){
        if(head==NULL){
            cout<<"Circular Linked List is empty"<<endl;
            return;
        }
        if(head->next==head){
            cout<<"Deleted: "<<head->data<<endl;
            head=NULL;
            return;
        }
        Node* tail=head;
        while(tail->next!=head){
            tail=tail->next;
        }
        cout<<"Deleted: "<<head->data<<endl;
        Node* new_head=head->next;
        head=new_head;
        tail->next=head;
    }
    void deleteAtTheTail(){
        if(head==NULL){
            cout<<"Circular Linked List is empty"<<endl;
            return;
        }
        if(head->next==head){
            cout<<"Deleted: "<<head->data<<endl;
            head=NULL;
            return;
        }
        Node* temp=head;
        while(temp->next->next!=head){
            temp=temp->next;
        }
        cout<<"Deleted: "<<temp->next->data<<endl;
        Node* t=temp->next;
        temp->next=head;
        delete t;
    }
    void deleteAtPosition(int k){
        if(k==0){
            deleteAtTheHead();
            return;
        }
        if(head==NULL){
            cout<<"Circular Linked List is empty"<<endl;
            return;
        }
        Node* temp=head;
        for(int i=0;i<k-1;i++){
            temp=temp->next;
        }
        cout<<"Deleted: "<<temp->next->data<<endl;
        Node* t=temp->next->next;
        temp->next=t;
    }
    void search(int x){
        if(head==NULL){
            return;
        }
        if(head->data==x){
            cout<<x<<" is present in list at index "<<0<<endl;
            return;
        }
        int k=1;
        Node* temp=head->next;
        while(temp!=head){
            if(temp->data==x){
                cout<<x<<" is present in list at index "<<k<<endl;
                return;
            }
            k++;
            temp=temp->next;
        }
        cout<<x<<" is not present in list"<<endl;
        return;
    }
    void display(){
        if(head==NULL){
            cout<<"Circular linked list is empty"<<endl;
            return;
        }
        cout<<head->data<<" ";
        Node* temp=head->next;
        while(temp!=head){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void circular(){
        int k=10;
        Node* temp=head;
        for(int i=0;i<k;i++){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    int traverse(){
        
        if(head==NULL){
            return 0;
        }
        int k=1;
        Node* temp=head->next;
        while(temp!=head){
            temp=temp->next;
            k++;
        }
        return k;
    }
};
int main(){
    circularLL l;
    cout<<"Enter i for insertion(h for at head, t for at tail, p for at position)\n"
        <<"enter d for deletion(h for at head,t for at tail, p for at position)\n"
        <<"Enter p for printing all elements of circular linked list\n"
        <<"Enter t for traversing and counting the no. of element in circular linked list\n"
        <<"Enter s for searching any element in circular linked list\n"
        <<"Enter c for showing cycling behaviour of circular linked list\n"
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
                    l.insertAtTheHead(v1);
                    break;
                case 't':
                    cout<<"Enter the element: ";
                    int v2;
                    cin>>v2;
                    l.insertAtTheTail(v2);
                    break;
                case 'p':
                    cout<<"Enter the element: ";
                    int v3;
                    cin>>v3;
                    cout<<"Enter the index: ";
                    int p1;
                    cin>>p1;
                    l.insertAtPosition(v3,p1);
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
                    l.deleteAtTheHead();
                    break;
                case 't':
                    l.deleteAtTheTail();
                    break;
                case 'p':
                    cout<<"Enter the index: ";
                    int p2;
                    cin>>p2;
                    l.deleteAtPosition(p2);
                    break;
                default:
                    cout<<"Invalid choice"<<endl;
                    break;
            }
            break;
        case 'p':
            cout<<"ELements in the list: ";
            l.display();
            break;
        case 's':
            cout<<"Enter element which you want to search in list: ";
            int x;
            cin>>x;
            l.search(x);
            break;
        case 't':
            cout<<"Total no. of elements in the list: "<<l.traverse()<<endl;
            break;
        case 'c':
            l.circular();
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