#include<iostream>
#include<queue>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};
Node* insertToBST(Node* root,int d){
    if(root==NULL){
        root=new Node(d);
        return root;
    }
    if(root->data>d){
        root->left=insertToBST(root->left,d);
    }
    else{
        root->right=insertToBST(root->right,d);
    }
}
void takeinput(Node* &root){
    int d;
    cout<<"Enter data: ";
    cin>>d;
    while (d!=-1)
    {
        root= insertToBST(root,d);
        cin>>d;
    }
}
void levelOrderTravesal(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node* temp=q.front();
        q.pop();
        if (temp==NULL)
        {
            cout<<endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
                
        }
        else{
            cout<<temp->data<<" ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
bool searchRecursively(Node* root,int x){
    if(root==NULL){
        return false;
    }
    if(root->data==x){
        return true;
    }
    if(root->data>x){
        searchRecursively(root->left,x);
    }
    else{
        searchRecursively(root->right,x);
    }
}
bool search(Node* root,int x){
    Node* temp=root;
    while (temp!=NULL)
    {
        if(temp->data==x){
            return true;
        }
        if(temp->data>x){
            temp=temp->left;
        }
        if(temp->data<x){
            temp=temp->right;
        }
    }
    return false;
}
int main(){
    Node* root=NULL;
    cout<<"Enter data for BST: "<<endl;
    takeinput(root);
    levelOrderTravesal(root);
    int x;
    cout<<"Enter data which you want to search in BST: ";
    cin>>x;
    cout<<search(root,x)<<endl;
    cout<<searchRecursively(root,x)<<endl;
    return 0;
}