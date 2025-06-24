#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node* prev;
    Node(int data){
        val=data;
        next=NULL;
        prev=NULL;
    }
};
class DoublyLinkedList{
public:
    Node* head;
    Node* tail;
    DoublyLinkedList(){
        head=NULL;
        tail=NULL;
    }
    void display(){
        Node* temp=head;
        while (temp)
        {
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<"endl";
        return;
    }
    void insertAtTail(int val){
        Node* new_node=new Node(val);
        if (tail==NULL)
        {
            head=new_node;
            tail=new_node;
            return;
        }
        tail->next=new_node;
        new_node->prev=tail;
        tail=new_node;
        return;
    }
};
bool isCriticalPoint(Node* currNode){
    if ((currNode->prev->val)<currNode->val>(currNode->next->val)|| (currNode->prev->val)>currNode->val<(currNode->next->val))
    {
        return true;   
    }
}
vector<int> distanceBetweenCriticalPoints(Node* head,Node* tail){
    vector<int>ans(2,INT_MAX);
    int firstCP=-1,lastCP=-1;
    Node* currNode=tail->prev;
    if (currNode==NULL)
    {
        ans[0]=ans[1]=-1;
        return ans;
    }
    int currPos=0;
    while (currNode->prev!=NULL)
    {
        if (isCriticalPoint(currNode))
        {
            if (firstCP==-1)
            {
                firstCP=lastCP=currPos;
            }
            else{
                ans[0]=min(ans[0],currPos-lastCP);
                ans[1]=currPos-firstCP;
                lastCP=currPos;
            }
        }
        currPos++;
        currNode=currNode->prev;
    }
    if (ans[0]==INT_MAX)
    {
        ans[0]=ans[1]=-1;
    }
    return ans;
}
int main(){
    DoublyLinkedList dll;
    dll.insertAtTail(1);
    dll.insertAtTail(5);
    dll.insertAtTail(2);
    dll.insertAtTail(6);
    dll.insertAtTail(3);
    vector<int>ans=distanceBetweenCriticalPoints(dll.head,dll.tail);
    cout<<"Minimun distance b/w critical points: "<<ans[0]<<endl;
    cout<<"Maximum distance b/w critical points: "<<ans[1]<<endl;
    return 0;
}