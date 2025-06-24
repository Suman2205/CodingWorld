#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
class BinaryTree{
public:
    Node* root;
    BinaryTree(){
        root=NULL;
    }
    Node* BuildTree(Node* root){
        cout<<"Enter the data: ";
        int data;
        cin>>data;
        root=new Node(data);
        if (data==-1)
        {
            return NULL;
        }
        cout<<"Enter data for inserting left of "<<data<<endl;
        root->left=BuildTree(root->left);
        cout<<"Enter data for inserting right of "<<data<<endl;
        root->right=BuildTree(root->right);
        return root;
    }
    void preorder(Node* root){
        if (root==NULL)
        {
            return;
        }
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
    void inorder(Node* root){
        if (root==NULL)
        {
            return;
        }
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
    void postorder(Node* root){
        if (root==NULL)
        {
            return;
        }
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
};
int main(){
    BinaryTree t;
    t.root=t.BuildTree(t.root);
    t.preorder(t.root);
    cout<<endl;
    t.inorder(t.root);
    cout<<endl;
    t.postorder(t.root);
    return 0;
}