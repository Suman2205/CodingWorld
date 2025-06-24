#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        this->data=val;
        left=NULL;
        right=NULL;
    }
};
class BST{
public:
    Node* root;
    void preorder(Node* node){
        if(node==NULL){
            return;
        }
        cout<<node->data<<" ";
        preorder(node->left);
        preorder(node->right);
    }
    void postorder(Node* node){
        if(node==NULL){
            return;
        }
        postorder(node->left);
        postorder(node->right);
        cout<<node->data<<" ";
    }
    void inorder(Node* node){
        if(node==NULL){
            return;
        }
        inorder(node->left);
        cout<<node->data<<" ";
        inorder(node->right);
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
    int min(Node* node){
        Node* temp=node;
        while(temp->left!=NULL){
            temp=temp->left;
        }
        return temp->data;
    }
    Node* deleteFromBST(Node* node,int val){
        if(node==NULL){
            return node;
        }
        if(node->data==val){
            if(node->left==NULL&&node->right==NULL){
                delete node;
                return NULL;
            }
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
            else{
                int minval=min(node->right);
                node->data=minval;
                node->right=deleteFromBST(node->right,minval);
                return node;
            }

        }
        else if(node->data>val){
            node->left=deleteFromBST(node->left,val);
        }
        else{
            node->right=deleteFromBST(node->right,val);
        }
    }
};
int main(){

}