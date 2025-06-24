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
            front=back=-1;
            return;
        }
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
    int getsize(){
        return size;
    }
    bool isEmpty(){
        return front==-1;
    }
    bool isFull(){
        return back==maxSize;
    }
};
int main(){
    int n;
    cout<<"Enter the maximum size of which you want to create queue: ";
    cin>>n;
    Queue q(n);
    if(q.isEmpty()){
        cout<<"At this time queue is empty"<<endl;
    }
    else{
        cout<<"At this time queue is not empty"<<endl;
    }
    int n1;
    cout<<"Enter no. of elements you want to add in your queue at this time: ";
    cin>>n1;
    cout<<"Enter all elements with spaces: "<<endl;
    for(int i=0;i<n1;i++){
        int x;
        cin>>x;
        q.enqueue(x);
    }
    cout<<"At this time front of queue is "<<q.getfront()<<endl;
    cout<<"At this time size of queue is "<<q.getsize()<<endl;
    int n2;
    cout<<"Enter no. of elements you want to delete from queue at this time: ";
    cin>>n2;
    for(int i=0;i<n2;i++){
        q.dequeue();
    }
    cout<<"After deleting some elements from queue, front of queue is "<<q.getfront()<<endl;
    cout<<"At this time size of queue is "<<q.getsize()<<endl;
    if(q.isFull()){
        cout<<"At this time queue is full"<<endl;
    }
    else{
        cout<<"At this time queue is not full"<<endl;
    }
    cout<<"After applying insertion and deletion operation in queue, queue is looking like: "<<endl;
    while (!q.isEmpty())
    {
        cout<<q.getfront()<<" ";
        q.dequeue();
    }
    
    return 0;
}