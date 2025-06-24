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
        back++;
        size++;
        arr[back]=val;
        if (back==0)
        {
            front=0;
            return;
        }
    }
    void dequeue(){
        if (front==-1||front==back+1)
        {
            cout<<"Queuer is empty"<<endl;
            return;
        }
        if (front==back)
        {
            cout<<"Dequeued: "<<arr[front]<<endl;
            front=back=-1;
            size--;
            return;
        }
        cout<<"Dequeued: "<<arr[front]<<endl;
        front++;
        size--;
    }
    int getfront(){
        if (front==-1)
        {
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[front];
    }
    void search(int x){
        int temp=front;
        while (temp!=back)
        {
            if(arr[temp]==x){
                cout<<x<<" is present at queue"<<endl;
                return;
            }
            temp++;
        }
        cout<<x<<" is not present at queue"<<endl;
        return;
    }
    void display(){
        for(int i=front;i<=back;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    int getsize(){
        return size;
    }
    bool isEmpty(){
        return front==-1;
    }
    bool isFull(){
        return back==maxSize-1;
    }
};
int main(){
    int n;
    cout<<"Enter the maximum size for queue: ";
    cin>>n;
    Queue q(n);
    cout<<"Enter e for enqueue, d for dequeue, p for printing all elements,\n f for printing front, s for printing current size,\n t for search element and q for non-operation"<<endl;
    while(true){
        char c;
        cout<<"Enter your choice: ";
        cin>>c;
        switch (c)
        {
        case 'e':
            int val;
            cout<<"Enter the element which you want to insert in queue: ";
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
            cout<<"Enter the element which you want to search in queue: ";
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