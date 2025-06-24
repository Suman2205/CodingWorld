#include<iostream>
using namespace std;
class Queue{
    int front;
    int back;
    int size;
    int maxSize;
    int *arr;
public:
    Queue(int n){
        arr=new int[n];
        maxSize=n;
        size=0;
        front=back=-1;
    }
    void enqueue(int val){
        if(isFull()){
            cout<<"Overflow"<<endl;
            return;
        }
        back=(back+1)%maxSize;
        arr[back]=val;
        size++;
        if(front==-1){
            front=back;
        }
    }
    void dequeue(){
        if (isEmpty())
        {
            cout<<"Queuer is empty"<<endl;
            return;
        }
        cout<<"Dequeued: "<<arr[front]<<endl;
        front=(front+1)%maxSize;
        size--;
        if(isEmpty()){
            front=back=-1;
        }
    }
    int getfront(){
        if (isEmpty())
        {
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[front];
    }
    void search(int x){
        if (isEmpty()) { 
            cout<<"Queue is empty";
            return ;
        } 
        for (int i = 0; i < size; i++) { 
            if (arr[(front+i)%maxSize] == x) { 
                cout<<x<<" is present in queue "<<endl;
                return; 
            } 
        }
        cout<<x<<" is not present in queue"<<endl; 
        return;
    }
    void display(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return;
        }
        cout<<"Queue Elements: ";
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    int getsize(){
        return size;
    }
    bool isEmpty(){
        return size==0;
    }
    bool isFull(){
        return size==maxSize;
    }
};
int main(){
    int n;
    cout<<"Enter the maximum size for circular queue: ";
    cin>>n;
    Queue q(n);
    cout<<"Enter e for enqueue, d for dequeue, p for printing all elements,\nf for printing front, s for printing current size,\nt for search element and q for non-operation"<<endl;
    while(true){
        char c;
        cout<<"Enter your choice: ";
        cin>>c;
        switch (c)
        {
        case 'e':
            int val;
            cout<<"Enter the element which you want to insert in circular queue: ";
            cin>>val;
            q.enqueue(val);
            break;
        case 'd':
            q.dequeue();
            break;
        case 'p':
            q.display();
            break;
        case 'f':
            cout<<"Front: "<<q.getfront()<<endl;
            break;
        case 's':
            cout<<"Size: "<<q.getsize()<<endl;
            break;
        case 't':
            int x;
            cout<<"Enter the element which you want to search in circular queue: ";
            cin>>x;
            q.search(x);
            break;
        case 'q':
            exit(1);
            break;
        default:
            cout<<"Invalid choice"<<endl;
            break;
        }
    }
    
    return 0;
}