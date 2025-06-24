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
    Node* solve(int in[],int pre[],int &index,int inorderStart,int inorderEnd,int n){
        if (index>=n||inorderStart>inorderEnd)
        {
            return NULL;
        }
        int element=pre[index++];
        Node* temp=new Node(element);
        int pos=position(in,element,n);
        temp->left=solve(in,pre,index,inorderStart,pos-1,n);
        temp->right=solve(in,pre,index,pos+1,inorderEnd,n);
        
        return temp;
    }
    Node* buildTree(int in[],int pre[],int n){
        int preOrderIndex=0;
        Node* ans=solve(in,pre,preOrderIndex,0,n-1,n);
        return ans;
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
    int in[]={3,1,4,0,5,2};
    int pre[]={0,1,3,4,2,5};
    t.root=t.buildTree(in,pre,6);
    t.postorder(t.root);
    return 0;
}