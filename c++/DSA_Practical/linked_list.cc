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
class singlyLL{
public:
    Node* head;
    singlyLL(){
        head=NULL;
    }
    void insertAtTheHead(int val){
        Node* new_node=new Node(val);
        if(head==NULL){
            head=new_node;
            return;
        }
        new_node->next=head;
        head=new_node;
    }
    void insertAtTheTail(int val){
        Node* new_node=new Node(val);
        if(head==NULL){
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
            cout<<"Singly Linked List is empty"<<endl;
            return;
        }
        if(head->next==NULL){
            cout<<"Deleted: "<<head->data<<endl;
            head=NULL;
            return;
        }
        cout<<"Deleted: "<<head->data<<endl;
        Node* new_head=head->next;
        head=new_head;
    }
    void deleteAtTheTail(){
        if(head==NULL){
            cout<<"Singly Linked List is empty"<<endl;
            return;
        }
        if(head->next==NULL){
            cout<<"Deleted: "<<head->data<<endl;
            head=NULL;
            return;
        }
        Node* temp=head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        cout<<"Deleted: "<<temp->next->data<<endl;
        Node* t=temp->next;
        temp->next=NULL;
        delete t;
    }
    void deleteAtPosition(int k){
        if(k==0){
            deleteAtTheHead();
            return;
        }
        if(head==NULL){
            cout<<"Singly Linked List is empty"<<endl;
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
        int k=0;
        Node* temp=head;
        while(temp!=NULL){
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
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
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
    singlyLL s;
    cout<<"Enter i for insertion(h for at head, t for at tail, p for at position)\n"
        <<"enter d for deletion(h for at head,t for at tail, p for at position)\n"
        <<"Enter p for printing all elements of singly linked list\n"
        <<"Enter t for traversing and counting the no. of element in singly linked list\n"
        <<"Enter s for searching any element in singly linked list\n"
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
                    s.insertAtTheHead(v1);
                    break;
                case 't':
                    cout<<"Enter the element: ";
                    int v2;
                    cin>>v2;
                    s.insertAtTheTail(v2);
                    break;
                case 'p':
                    cout<<"Enter the element: ";
                    int v3;
                    cin>>v3;
                    cout<<"Enter the index: ";
                    int p1;
                    cin>>p1;
                    s.insertAtPosition(v3,p1);
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
                    s.deleteAtTheHead();
                    break;
                case 't':
                    s.deleteAtTheTail();
                    break;
                case 'p':
                    cout<<"Enter the index: ";
                    int p2;
                    cin>>p2;
                    s.deleteAtPosition(p2);
                    break;
                default:
                    cout<<"Invalid choice"<<endl;
                    break;
            }
            break;
        case 'p':
            cout<<"ELements in the list: ";
            s.display();
            break;
        case 's':
            cout<<"Enter element which you want to search in list: ";
            int x;
            cin>>x;
            s.search(x);
            break;
        case 't':
            cout<<"Total no. of elements in the list: "<<s.traverse()<<endl;
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