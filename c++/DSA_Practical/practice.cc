// program-1(Binary Search):
// #include<iostream>
// using namespace std;
// int binarySearch(int arr[],int n,int x){
//     int lo=0;
//     int hi=n-1;
//     while(lo<=hi){
//         int mid=(lo+hi)/2;
//         if(arr[mid]==x){
//             return mid;
//         }
//         else if(arr[mid]<x){
//             lo=mid+1;
//         }
//         else{
//             hi=mid-1;
//         }
//     }
//     return -1;
// }
// int main(){
//     int n;
//     cout<<"Enter total no. of elements: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter all the elements of array in sorted manner: ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int x;
//     cout<<"Enter the element which you want to search in array: ";
//     cin>>x;
//     if(binarySearch(arr,n,x)==-1){
//         cout<<x<<" is not present in array"<<endl;
//     }
//     else{
//         cout<<x<<" is found in array at index "<<binarySearch(arr,n,x)<<endl;
//     }
//     return 0;
// }

// program-2(a)(Selection Sort):
// #include<iostream>
// using namespace std;
// void selectionSort(int arr[],int n){
//     for(int i=0;i<n;i++){
//         int min=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[min]>arr[j]){
//                 min=j;
//             }
//         }
//         if(min!=i){
//             swap(arr[min],arr[i]);
//         }
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter total no. of elements: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Ente all the elements of array: ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     selectionSort(arr,n);
//     cout<<"The sorted array: ";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// program-2(b)(Insertion Sort):
// #include<iostream>
// using namespace std;
// void insertionSort(int arr[],int n){
//     for(int i=1;i<n;i++){
//         int curr=arr[i];
//         int j=i-1;
//         while(j>=0&&arr[j]>curr){
//             arr[j+1]=arr[j];
//             j=j-1;
//         }
//         arr[j+1]=curr;
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter total no. of elements: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter all the elements of array: ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     insertionSort(arr,n);
//     cout<<"The sorted array: ";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// program-2(b)(Bubble Sort):
// #include<iostream>
// using namespace std;
// void bubbleSort(int arr[],int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter total no. of elements: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter all the elements of array: ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     bubbleSort(arr,n);
//     cout<<"The sorted array: ";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// program-3(Stack):
// #include<iostream>
// using namespace std;
// class stack{
//     int* arr;
//     int top;
//     int capacity;
//     int size;
// public:
//     stack(int n){
//         capacity=n;
//         arr=new int(n);
//         top=-1;
//         size=0;
//     }
//     void push(int x){
//         if(size>=capacity){
//             cout<<"Overflow"<<endl;
//             return;
//         }
//         top++;
//         arr[top]=x;
//         size++;
//     }
//     void pop(){
//         if(size==0){
//             cout<<"Underflow"<<endl;
//             return;
//         }
//         cout<<arr[top]<<" is popped"<<endl;
//         top--;
//         size--;
//     }
//     int getTop(){
//         if(size==0){
//             cout<<"Stack is empty"<<endl;
//             return -1;
//         }
//         return arr[top];
//     }
//     int getSize(){
//         return size;
//     }
//     void print(){
//         for(int i=0;i<=top;i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }
//     bool search(int x){
//         for(int i=0;i<=top;i++){
//             if(arr[i]==x){
//                 return true;
//             }
//         }
//         return false;
//     }
//     bool isFull(){
//         return size==capacity;
//     }
//     bool isEmpty(){
//         return size==0;
//     }
// };
// int main(){
//     int n;
//     cout<<"Enter maximum capacity you want for stack: ";
//     cin>>n;
//     stack s(n);
//     cout<<"Enter 1 for insertion, 2 for deletion, 3 for printing top\n, 4 for printing all elements of stack,5 for printing size of stack, 6 for searching\n, 7 for exit: "<<endl;
//     while (true)
//     {
//        char c;
//         cout<<"Enter your choice: ";
//         cin>>c;
//         if(c=='7'){
//             break;
//         }
//         switch (c)
//         {
//         case '1':
//             int x;
//             cout<<"Enter element which you want to insert: ";
//             cin>>x;
//             s.push(x);
//             break;
//         case '2':
//             s.pop();
//             break;
//         case '3':
//             cout<<"The top element of stack is: "<<s.getTop()<<endl; 
//             break;
//         case '4':
//             s.print();
//             break;
//         case '5':
//             cout<<"The size of stack is: "<<s.getSize()<<endl;
//             break;
//         case '6':
//             int t;
//             cout<<"Enter element which you want to search in stack: ";
//             cin>>t;
//             if(s.search(t)){
//                 cout<<t<<" is present in stack"<<endl;
//             }
//             else{
//                 cout<<t<<" is not present in stack"<<endl;
//             }
//             break;
//         default:
//             cout<<"Invalid Choice"<<endl;
//             break;
//         } 
//     }
//     return 0;
// }

// program-4(Quick Sort):
// #include<iostream>
// using namespace std;
// int quick(int arr[],int first,int last){
//     int i=first-1;
//     for(int j=first;j<last;j++){
//         if (arr[j]<arr[last]){
//             swap(arr[++i],arr[j]);
//         }
//     }
//     swap(arr[i+1],arr[last]);
//     return i+1;
// }
// void quickSort(int arr[],int first,int last){
//     if(first>=last){
//         return;
//     }
//     int pi=quick(arr,first,last);
//     quickSort(arr,first,pi-1);
//     quickSort(arr,pi+1,last);
//     return;
// }
// int main(){
//     int n;
//     cout<<"Enter total no. of elements: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter all the elements of array: ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     quickSort(arr,0,n-1);
//     cout<<"The sorted array: ";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// program-5(Merge Sort):
// #include<iostream>
// using namespace std;
// void merge(int arr[],int first,int mid,int last){
//     int an=mid-first+1;
//     int bn=last-mid;
//     int a[an];
//     int b[bn];
//     for(int i=0;i<an;i++){
//         a[i]=arr[first+i];
//     }
//     for(int j=0;j<bn;j++){
//         b[j]=arr[mid+j+1];
//     }
//     int i=0;
//     int j=0;
//     int k=first;
//     while (i<an&&j<bn)
//     {
//         if(a[i]<b[j]){
//             arr[k++]=a[i++];
//         }
//         else{
//             arr[k++]=b[j++];
//         }
//     }
//     while(i<an){
//         arr[k++]=a[i++];
//     }
//     while(j<bn){
//         arr[k++]=b[j++];
//     }
//     return;
// }
// void mergeSort(int arr[],int first,int last){
//     if(first>=last){
//         return;
//     }
//     int mid=(first+last)/2;
//     mergeSort(arr,first,mid);
//     mergeSort(arr,mid+1,last);
//     merge(arr,first,mid,last);
//     return;
// }
// int main(){
//     int n;
//     cout<<"Enter total no. of elements: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter all the elements of array: ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     mergeSort(arr,0,n-1);
//     cout<<"The sorted array: ";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// program-6(Queue):
// #include<iostream>
// using namespace std;
// class queue{
//     int* arr;
//     int front;
//     int rear;
//     int size;
//     int capacity;
// public:
//     queue(int n){
//         arr=new int(n);
//         capacity=n;
//         front=-1;
//         rear=-1;
//         size=0;
//     }
//     void enqueue(int x){
//         if(size==capacity){
//             cout<<"Overflow"<<endl;
//             return;
//         }
//         if(front==-1&&rear==-1){
//             front=0;
//             rear=0;
//         }
//         else{
//             rear++;
//         }
//         arr[rear]=x;
//         size++;
//     }
//     void dequeue(){
//         if(size==0){
//             cout<<"Underflow"<<endl;
//             return;
//         }
//         cout<<arr[front]<<" is Dequeued"<<endl;
//         if(front==rear){
//             front=rear=-1;
//         }
//         else{
//             front++;
//         }
//         size--;
//     }
//     bool Search(int x){
//         for(int i=front;i<=rear;i++){
//             if(arr[i]==x){
//                 return true;
//             }
//         }
//         return false;
//     }
//     void print(){
//         for(int i=front;i<=rear;i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }
//     int getFront(){
//         if(front==-1){
//             cout<<"Queue is empty"<<endl;
//             return -1;
//         }
//         return arr[front];
//     }
//     int getSize(){
//         return size;
//     }
//     bool isFull(){
//         return size==capacity;
//     }
//     bool isEmpty(){
//         return size==0;
//     }
// };
// int main(){
//     int n;
//     cout<<"Enter maximum capacity of queue: ";
//     cin>>n;
//     queue q(n);
//     cout<<"Queue Operation: "<<endl;
//     cout<<"1. Insertion\n2. Deletion\n3.Traversing\n4.Get Front\n5. Get Size\n6. Searching\n7. Exit"<<endl;
//     while (true)
//     {
//         char c;
//         cout<<"Enter your choice: ";
//         cin>>c;
//         if(c=='7'){
//             break;
//         }
//         switch (c)
//         {
//         case '1':
//             int x;
//             cout<<"Enter the element which you want to insert in queue: ";
//             cin>>x;
//             q.enqueue(x);
//             break;
//         case '2':
//             q.dequeue();
//             break;
//         case '3':
//             cout<<"Elements in queue: ";
//             q.print();
//             break;
//         case '4':
//             cout<<"Front element of Queue: "<<q.getFront()<<endl;
//             break;
//         case '5':
//             cout<<"Size of Queue: "<<q.getSize()<<endl;
//             break;
//         case '6':
//             int val;
//             cout<<"Enter element which you want to search in queue: ";
//             cin>>val;
//             if(q.Search(val)){
//                 cout<<val<<" is present in queue"<<endl;
//             }
//             else{
//                 cout<<val<<" is not present in queue"<<endl;
//             }
//             break;
//         default:
//             cout<<"Invalid Choice"<<endl;
//             break;
//         }
//     }
//     return 0;
// }

// program-7(Circular Queue):
// #include<iostream>
// using namespace std;
// class Cqueue{
//     int* arr;
//     int front;
//     int rear;
//     int size;
//     int capacity;
// public:
//     Cqueue(int n){
//         arr=new int(n);
//         capacity=n;
//         front=-1;
//         rear=-1;
//         size=0;
//     }
//     void enqueue(int x){
//         if(isFull()){
//             cout<<"Overflow"<<endl;
//             return;
//         }
//         if(front==-1&&rear==-1){
//             front=0;
//             rear=0;
//         }
//         else if(rear==capacity){
//             rear=0;
//         }
//         else{
//             rear++;
//         }
//         arr[rear]=x;
//         size++;
//     }
//     void dequeue(){
//         if(isEmpty()){
//             cout<<"Underflow"<<endl;
//             return;
//         }
//         cout<<arr[front]<<" is Dequeued"<<endl;
//         if(front==rear){
//             front=rear=-1;
//         }
//         else if(front==capacity){
//             front=0;
//         }
//         else{
//             front++;
//         }
//         size--;
//     }
//     bool Search(int x){
//         if(isEmpty()){
//             cout<<"Queue is empty"<<endl;
//             return false;
//         }
//         int i=front;
//         int c=0;
//         while (c<size){
//             if(arr[i]==x){
//                 return true;
//             }
//             if(i==capacity){
//                 i=0;
//                 c++;
//             }
//             else{
//                 i++;
//                 c++;
//             }
//         }
//         return false;
//     }
//     void print(){
//         if(isEmpty()){
//             cout<<"Queue is empty"<<endl;
//             return;
//         }
//         int i=front;
//         int c=0;
//         while (c<size){
//             cout<<arr[i]<<" ";
//             if(i==capacity){
//                 i=0;
//                 c++;
//             }
//             else{
//                 i++;
//                 c++;
//             }
//         }
//         cout<<endl;
//     }
//     int getFront(){
//         if(front==-1){
//             cout<<"Queue is empty"<<endl;
//             return -1;
//         }
//         return arr[front];
//     }
//     int getSize(){
//         return size;
//     }
//     bool isFull(){
//         return size==capacity;
//     }
//     bool isEmpty(){
//         return size==0;
//     }
// };
// int main(){
//     int n;
//     cout<<"Enter maximum capacity of queue: ";
//     cin>>n;
//     Cqueue q(n);
//     cout<<"Circular Queue Operation: "<<endl;
//     cout<<"1. Insertion\n2. Deletion\n3.Traversing\n4.Get Front\n5. Get Size\n6. Searching\n7. Exit"<<endl;
//     while (true)
//     {
//         char c;
//         cout<<"Enter your choice: ";
//         cin>>c;
//         if(c=='7'){
//             break;
//         }
//         switch (c)
//         {
//         case '1':
//             int x;
//             cout<<"Enter the element which you want to insert in cirular queue: ";
//             cin>>x;
//             q.enqueue(x);
//             break;
//         case '2':
//             q.dequeue();
//             break;
//         case '3':
//             cout<<"Elements in queue: ";
//             q.print();
//             break;
//         case '4':
//             cout<<"Front element of Queue: "<<q.getFront()<<endl;
//             break;
//         case '5':
//             cout<<"Size of Queue: "<<q.getSize()<<endl;
//             break;
//         case '6':
//             int val;
//             cout<<"Enter element which you want to search in circular queue: ";
//             cin>>val;
//             if(q.Search(val)){
//                 cout<<val<<" is present in queue"<<endl;
//             }
//             else{
//                 cout<<val<<" is not present in queue"<<endl;
//             }
//             break;
//         default:
//             cout<<"Invalid Choice"<<endl;
//             break;
//         }
//     }
//     return 0;
// }

// program-8(Singly Linked List):
// #include<iostream>
// using namespace std;
// class Node{
// public:
//     int data;
//     Node* next;
//     Node(int val){
//         data=val;
//         next=NULL;
//     }
// };
// class LinkedList{
//     Node* head;
// public:
//     LinkedList(){
//         head=NULL;
//     }
//     void insertAtHead(int val){
//         Node* new_node=new Node(val);
//         if(head==NULL){
//             head=new_node;
//             return;
//         }
//         new_node->next=head;
//         head=new_node;
//         return;
//     }
//     void insertAtTail(int val){
//         Node* new_node=new Node(val);
//         if(head==NULL){
//             head=new_node;
//             return;
//         }
//         Node* temp=head;
//         while(temp->next!=NULL){
//             temp=temp->next;
//         }
//         temp->next=new_node;
//         return;
//     }
//     void insertAtPosition(int val,int k){
//         Node* new_node=new Node(val);
//         if(head==NULL){
//             head=new_node;
//             return;
//         }
//         if(k==0){
//             insertAtHead(val);
//             return;
//         }
//         Node* temp=head;
//         for(int i=0;i<k-1;i++){
//             temp=temp->next;
//         }
//         new_node->next=temp->next;
//         temp->next=new_node;
//         return;
//     }
//     void deleteAtHead(){
//         if(head==NULL){
//             cout<<"Underflow,List is empty"<<endl;
//             return;
//         }
//         cout<<head->data<<" is deleted"<<endl;
//         Node* temp=head;
//         head=head->next;
//         delete temp;
//     }
//     void deleteAtTail(){
//         if(head==NULL){
//             cout<<"Underflow,List is empty"<<endl;
//             return;
//         }
//         if(head->next==NULL){
//             cout<<head->data<<" is deleted"<<endl;
//             head==NULL;
//             return;
//         }
//         Node* temp=head;
//         while(temp->next->next!=NULL){
//             temp=temp->next;
//         }
//         cout<<temp->next->data<<" is deleted"<<endl;
//         Node* temp1=temp->next;
//         temp->next=NULL;
//         delete temp1;
//     }
//     void deleteAtPosition(int k){
//         if(k==0){
//             deleteAtHead();
//             return;
//         }
//         if(head==NULL){
//             cout<<"Underflow,List is empty"<<endl;
//             return;
//         }
//         Node* temp=head;
//         for(int i=0;i<k-1;i++){
//             temp=temp->next;
//         }
//         cout<<temp->next->data<<" is deleted"<<endl;
//         Node* temp1=temp->next;
//         temp->next=temp->next->next;
//         delete temp1;
//     }
//     void display(){
//         if(head==NULL){
//             cout<<"List is empty"<<endl;
//             return;
//         }
//         Node* temp=head;
//         while(temp!=NULL){
//             cout<<temp->data<<" ";
//             temp=temp->next;
//         }
//         cout<<endl;
//     }
//     void search(int val){
//         int k=0;
//         Node* temp=head;
//         while (temp!=NULL)
//         {
//             if(temp->data==val){
//                 cout<<val<<" is present in list at index "<<k<<endl;
//                 return;
//             }
//             temp=temp->next;
//             k++;
//         }
//         cout<<val<<" is not present in list"<<endl;
//         return;
//     }
//     int count(){
//         int k=0;
//         Node* temp=head;
//         while(temp!=NULL){
//             k++;
//             temp=temp->next;
//         }
//         return k;
//     }
// };
// int main(){
//     LinkedList ll;
//     ll.insertAtHead(1);
//     ll.display();
//     ll.insertAtHead(2);
//     ll.display();
//     ll.insertAtTail(3);
//     ll.display();
//     ll.insertAtPosition(5,2);
//     ll.insertAtHead(4);
//     ll.insertAtTail(8);
//     ll.display();
//     ll.deleteAtHead();
//     ll.display();
//     ll.deleteAtTail();
//     ll.display();
//     ll.deleteAtPosition(1);
//     ll.display();
//     ll.insertAtHead(4);
//     ll.display();
//     ll.insertAtTail(5);
//     ll.display();
//     ll.search(5);
//     cout<<"The no. of elements in list: "<<ll.count()<<endl;
//     return 0;
// }

// program-9(Doubly Linked List):
// #include<iostream>
// using namespace std;
// class Node{
// public:
//     int data;
//     Node* next;
//     Node* prev;
//     Node(int val){
//         data=val;
//         next=NULL;
//         prev=NULL;
//     }
// };
// class DoublyLL{
//     Node* head;
//     Node* tail;
// public:
//     DoublyLL(){
//         head=NULL;
//         tail=NULL;
//     }
//     void insertAtHead(int val){
//         Node* new_node=new Node(val);
//         if(head==NULL){
//             head=new_node;
//             tail=new_node;
//             return;
//         }
//         new_node->next=head;
//         head->prev=new_node;
//         head=new_node;
//     }
//     void insertAtTail(int val){
//         Node* new_node=new Node(val);
//         if(head==NULL){
//             head=new_node;
//             tail=new_node;
//             return;
//         }
//         tail->next=new_node;
//         new_node->prev=tail;
//         tail=new_node;
//     }
//     void insertAtPosition(int val,int k){
//         Node* new_node=new Node(val);
//         if(head==NULL){
//             head=new_node;
//             tail=new_node;
//             return;
//         }
//         if(k==0){
//             insertAtHead(val);
//             return;
//         }
//         Node* temp=head;
//         for(int i=0;i<k-1;i++){
//             temp=temp->next;
//         }
//         new_node->next=temp->next;
//         new_node->prev=temp;
//         new_node->next->prev=new_node;
//         temp->next=new_node;
//     }
//     void deleteAtHead(){
//         if(head==NULL){
//             cout<<"Underflow,List is empty"<<endl;
//             return;
//         }
//         if(head->next==NULL){
//             head=tail=NULL;
//             return;
//         }
//         cout<<head->data<<" is deleted"<<endl;
//         Node* temp=head;
//         head->next->prev=NULL;
//         head=head->next;
//         delete temp;
//     }
//     void deleteAtTail(){
//         if(head==NULL){
//             cout<<"Underflow,List is empty"<<endl;
//             return;
//         }
//         if(head->next==NULL){
//             head=tail=NULL;
//             return;
//         }
//         cout<<tail->data<<" is deleted"<<endl;
//         Node* temp=tail;
//         tail->prev->next=NULL;
//         tail=tail->prev;
//         delete temp;
//     }
//     void deleteAtPosition(int k){
//         if(head==NULL){
//             cout<<"Underflow,List is empty"<<endl;
//             return;
//         }
//         if(k==0){
//             deleteAtHead();
//             return;
//         }
//         Node* temp=head;
//         for(int i=0;i<k-1;i++){
//             temp=temp->next;
//         }
//         if(temp->next->next==NULL){
//             deleteAtTail();
//             return;
//         }
//         cout<<temp->next->data<<" is deleted"<<endl;
//         Node* f=temp->next;
//         Node* t=temp->next->next;
//         t->prev=temp;
//         temp->next=t;
//         delete f;
//     }
//     void display(){
//         if(head==NULL){
//             cout<<"List is empty"<<endl;
//             return;
//         }
//         Node* temp=head;
//         while(temp!=NULL){
//             cout<<temp->data<<" ";
//             temp=temp->next;
//         }
//         cout<<endl;
//     }
//     void reverseTraverse(){
//         if(head==NULL){
//             cout<<"List is empty"<<endl;
//             return;
//         }
//         Node* temp=tail;
//         while(temp!=NULL){
//             cout<<temp->data<<" ";
//             temp=temp->prev;
//         }
//         cout<<endl;
//     }
//     void search(int val){
//         int k=0;
//         Node* temp=head;
//         while (temp!=NULL)
//         {
//             if(temp->data==val){
//                 cout<<val<<" is present in list at index "<<k<<endl;
//                 return;
//             }
//             temp=temp->next;
//             k++;
//         }
//         cout<<val<<" is not present in list"<<endl;
//         return;
//     }
//     int count(){
//         int k=0;
//         Node* temp=head;
//         while(temp!=NULL){
//             k++;
//             temp=temp->next;
//         }
//         return k;
//     }
// };
// int main(){
//     DoublyLL ll;
//     ll.insertAtHead(1);
//     ll.display();
//     ll.insertAtHead(2);
//     ll.display();
//     ll.insertAtTail(3);
//     ll.display();
//     ll.insertAtPosition(5,2);
//     ll.insertAtHead(8);
//     ll.insertAtTail(9);
//     ll.display();
//     ll.deleteAtHead();
//     ll.display();
//     ll.deleteAtTail();
//     ll.display();
//     ll.deleteAtPosition(1);
//     ll.display();
//     ll.insertAtHead(4);
//     ll.display();
//     ll.insertAtTail(5);
//     ll.display();
//     ll.search(5);
//     cout<<"The no. of elements in list: "<<ll.count()<<endl;
//     cout<<"Printing all elements of list in reverse order: ";
//     ll.reverseTraverse();
//     return 0;
// }

// program-10(Circular Linked List):
// #include<iostream>
// using namespace std;
// class Node{
// public:
//     int data;
//     Node* next;
//     Node(int val){
//         data=val;
//         next=NULL;
//     }
// };
// class CircularLL{
//     Node* head;
// public:
//     CircularLL(){
//         head=NULL;
//     }
//     void insertAtHead(int val){
//         Node* new_node=new Node(val);
//         if(head==NULL){
//             head=new_node;
//             head->next=head;
//             return;
//         }
//         new_node->next=head;
//         Node* temp=head;
//         while(temp->next!=head){
//             temp=temp->next;
//         }
//         temp->next=new_node;
//         head=new_node;
//     }
//     void insertAtTail(int val){
//         Node* new_node=new Node(val);
//         if(head==NULL){
//             head=new_node;
//             head->next=head;
//             return;
//         }
//         Node* temp=head;
//         while (temp->next!=head)
//         {
//             temp=temp->next;
//         }
//         temp->next=new_node;
//         new_node->next=head;
//     }
//     void insertAtPosition(int val,int k){
//         Node* new_node=new Node(val);
//         if(k==0){
//             insertAtHead(val);
//             return;
//         }
//         Node* temp=head;
//         for(int i=0;i<k-1;i++){
//             temp=temp->next;
//         }
//         if(temp->next==head){
//             insertAtTail(val);
//             return;
//         }
//         new_node->next=temp->next;
//         temp->next=new_node;
//     }
//     void deleteAtHead(){
//         if(head==NULL){
//             cout<<"List is empty"<<endl;
//             return;
//         }
//         cout<<head->data<<" is deleted"<<endl;
//         if(head->next==head){
//             head=NULL;
//             return;
//         }
//         Node* temp=head;
//         while(temp->next!=head){
//             temp=temp->next;
//         }
//         head=head->next;
//         temp->next=head;
//     }
//     void deleteAtTail(){
//         if(head==NULL){
//             cout<<"List is empty"<<endl;
//             return;
//         }
//         if(head->next==head){
//             cout<<head->data<<" is deleted"<<endl;
//             head=NULL;
//             return;
//         }
//         Node* temp=head;
//         while(temp->next->next!=head){
//             temp=temp->next;
//         }
//         cout<<temp->next->data<<" is deleted"<<endl;
//         Node* t=temp->next;
//         temp->next=head;
//         delete t;
//     }
//     void deleteAtPosition(int k){
//         if(head==NULL){
//             cout<<"List is empty"<<endl;
//             return;
//         }
//         if(k==0){
//             deleteAtHead();
//             return;
//         }
//         Node* temp=head;
//         for(int i=0;i<k-1;i++){
//             temp=temp->next;
//         }
//         if(temp->next->next==head){
//             deleteAtTail();
//             return;
//         }
//         Node* t=temp->next;
//         temp->next=temp->next->next;
//         delete t;
//     }
//     void display(){
//         if(head==NULL){
//             cout<<"List is empty"<<endl;
//             return;
//         }
//         cout<<head->data<<" ";
//         Node* temp=head->next;
//         while(temp!=head){
//             cout<<temp->data<<" ";
//             temp=temp->next;
//         }
//         cout<<endl;
//     }
//     int search(int val){
//         if(head==NULL){
//             cout<<"List is empty"<<endl;
//             return -1;
//         }
//         if(head->data==val){
//             return 0;
//         }
//         int k=0;
//         Node* temp=head;
//         while(temp->next!=head){
//             if(temp->data==val){
//                 return k;
//             }
//             k++;
//             temp=temp->next;
//         }
//     }
//     int count(){
//         int k=1;
//         Node* temp=head;
//         while(temp->next!=head){
//             temp=temp->next;
//             k++;
//         }
//         return k;
//     }
// };
// int main(){
//     CircularLL ll;
//     ll.insertAtHead(1);
//     ll.display();
//     ll.insertAtHead(2);
//     ll.display();
//     ll.insertAtTail(3);
//     ll.display();
//     ll.insertAtPosition(5,2);
//     ll.insertAtHead(8);
//     ll.insertAtTail(9);
//     ll.display();
//     ll.deleteAtHead();
//     ll.display();
//     ll.deleteAtTail();
//     ll.display();
//     ll.deleteAtPosition(1);
//     ll.display();
//     ll.insertAtHead(4);
//     ll.display();
//     ll.insertAtTail(5);
//     ll.display();
//     ll.search(5);
//     cout<<"The no. of elements in list: "<<ll.count()<<endl;
//     return 0;
// }