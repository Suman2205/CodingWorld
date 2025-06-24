#include<iostream>
#include<bits/stdc++.h>
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
class BST{
public:
    Node* root;
    BST(){
        root=NULL;
    }
    void preorder(Node* node){
        if(node==NULL){
            return;
        }
        cout<<node->data<<" ";
        preorder(node->left);
        preorder(node->right);
    }
    void inorder(Node* node){
        if(node==NULL){
            return;
        }
        inorder(node->left);
        cout<<node->data<<" ";
        inorder(node->right);
    }
    void postorder(Node* node){
        if(node==NULL){
            return;
        }
        postorder(node->left);
        postorder(node->right);
        cout<<node->data<<" ";
    }
    Node* insert(Node* node,int val){
        if(root==NULL){
            root=new Node(val);
            return root;
        }
        if(node==NULL){
            return new Node(val);
        }
        if(node->data>val){
            node->left=insert(node->left,val);
        }
        else{
            node->right=insert(node->right,val);
        }
        return node;
    }
    void levelOrderTravesal(Node* node){
        queue<Node*>q;
        q.push(node);
        q.push(NULL);
        while (!q.empty()){
            Node* temp=q.front();
            q.pop();
            if (temp==NULL){
                cout<<endl;
                if (!q.empty()){
                    q.push(NULL);
                }       
            }
            else{
                cout<<temp->data<<" ";
                if (temp->left){
                    q.push(temp->left);
                }
                if (temp->right){
                    q.push(temp->right);
                }
            }
        }
    }
    bool search(Node* node,int val){
        if(node==NULL){
            return false;
        }
        if(node->data==val){
            return true;
        }
        if(node->data>val){
            return search(node->left,val);
        }
        else{
            return search(node->right,val);
        }
        return false;
    }
    int min(Node* node){
        Node* temp=node;
        while (temp->left!=NULL)
        {
            temp=temp->left;
        }
        return temp->data;
    }
    Node* deleteFromBST(Node* node,int val){
        if(node==NULL){
            return node;
        }
        if(node->data==val){
            //0 child
            if (node->left==NULL&&node->right==NULL)
            {
                delete node;
                return NULL;
            }
            //1 child
            else if(node->left==NULL){
                Node* temp=node->right;
                delete node;
                return temp;
            }
            else if(node->right==NULL){
                Node* temp=node->left;
                delete node;
                return temp;
            }
            //2 child
            else{
                int minval=min(node->right);   //here min value node represents inorder succesor
                node->data=minval;
                node->right=deleteFromBST(node->right,minval);
                return node;
            }
        }
        if(node->data>val){
            node->left=deleteFromBST(node->left,val);
        }
        else{
            node->right=deleteFromBST(node->right,val);
        }
    }
};
int main(){
    BST t;
    t.insert(t.root,6);
    t.insert(t.root,7);
    t.insert(t.root,5);
    t.insert(t.root,10);
    t.insert(t.root,2);
    t.insert(t.root,8);
    cout<<"Preorder travesal of given binary search tree: ";
    t.preorder(t.root);
    cout<<endl;
    cout<<"Inorder travesal of given binary search tree: ";
    t.inorder(t.root);
    cout<<endl;
    cout<<"Postorder travesal of given binary search tree: ";
    t.postorder(t.root);
    cout<<endl;
    cout<<"Level order travesal of given binary search tree: "<<endl;
    t.levelOrderTravesal(t.root);
    cout<<endl;
    cout<<t.deleteFromBST(t.root,10)->data<<" is deleted from given binary search tree"<<endl;
    cout<<"After deletion the given binary search tree: "<<endl;
    t.levelOrderTravesal(t.root);
    if(t.search(t.root,10)){
        cout<<10<<" is present in given tree"<<endl;
    }
    else{
        cout<<10<<" is not present in given tree"<<endl;
    }
    if(t.search(t.root,5)){
        cout<<5<<" is present in given tree"<<endl;
    }
    else{
        cout<<5<<" is not present in given tree"<<endl;
    }
    return 0;
}