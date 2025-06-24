#include<iostream>
#include<map>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int ele){
        data=ele;
        left=NULL;
        right=NULL;
    }
};
class BinaryTree{
public:
    Node* root;
    BinaryTree(){
        root==NULL;
    }
    int position(int in[],int element,int n){
        map<int,int>m;
        for (int i = 0; i <n; i++)
        {
            m[in[i]]=i;
        }
        if (m.find(element)!=m.end())
        {
            return m[element];
        }
        return -1;
    }
    Node* solve(int in[],int post[],int &index,int inorderStart,int inorderEnd,int n){
        if (index<0||inorderStart>inorderEnd)
        {
            return NULL;
        }
        int element=post[index--];
        Node* temp=new Node(element);
        int pos=position(in,element,n);
        temp->right=solve(in,post,index,pos+1,inorderEnd,n);
        temp->left=solve(in,post,index,inorderStart,pos-1,n);
        
        return temp;
    }
    Node* buildTree(int in[],int post[],int n){
        int postOrderIndex=n-1;
        Node* ans=solve(in,post,postOrderIndex,0,n-1,n);
        return ans;
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
};
int main(){
    BinaryTree t;
    int in[]={4,8,2,5,1,6,3,7};
    int post[]={8,4,5,2,6,7,3,1};
    t.root=t.buildTree(in,post,8);
    t.preorder(t.root);
    return 0;
}