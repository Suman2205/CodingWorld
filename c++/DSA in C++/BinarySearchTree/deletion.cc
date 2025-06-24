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
int max(Node* root){
    Node* temp=root;
    while (temp->right!=NULL)
    {
        temp=temp->right;
    }
    return temp->data;
}
int min(Node* root){
    Node* temp=root;
    while (temp->left!=NULL)
    {
        temp=temp->left;
    }
    return temp->data;
}
Node* deleteFromBST(Node* root,int val){
    if(root==NULL){
        return root;
    }
    if(root->data==val){
        //0 child
        if (root->left==NULL&&root->right==NULL)
        {
            delete root;
            return NULL;
        }
        //1 child
        else if(root->left==NULL){
            Node* temp=root->right;
            delete root;
            return temp;
        }
        else if(root->right==NULL){
            Node* temp=root->left;
            delete root;
            return temp;
        }
        //2 child
        else{
            int minval=min(root->right);
            root->data=minval;
            root->right=deleteFromBST(root->right,minval);
            return root;
        }
    }
    if(root->data>val){
        root->left=deleteFromBST(root->left,val);
    }
    else{
        root->right=deleteFromBST(root->right,val);
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
int main(){
    Node* root=NULL;
    cout<<"Enter data for BST: "<<endl;
    takeinput(root);
    levelOrderTravesal(root);
    // root=deleteFromBST(root,30);
    // levelOrderTravesal(root);
    root=deleteFromBST(root,50);
    levelOrderTravesal(root);
    return 0;
}