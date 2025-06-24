#include<iostream>
#include<vector>
#include<queue>
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
    void buildTreeFromLevelOrder(Node* &root){
        queue<Node*>q;
        int data;
        cout<<"Enter data: ";
        cin>>data;
        root=new Node(data);
        q.push(root);
        while (!q.empty())
        {
            Node* temp=q.front();
            q.pop();
            int leftdata;
            cout<<"Enter left node for "<<temp->data<<": ";
            cin>>leftdata;
            if(leftdata!=-1){
                temp->left=new Node(leftdata);
                q.push(temp->left);
            }
            int rightdata;
            cout<<"Enter right node for "<<temp->data<<": ";
            cin>>rightdata;
            if(rightdata!=-1){
                temp->right=new Node(rightdata);
                q.push(temp->right);
            }
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
                if(temp->right){
                    q.push(temp->right);
                }
            }
        }
    }
    void flatten(Node* &root){
        Node* curr=root;
        while (curr!=NULL)
        {
            if (curr->left)
            {
                Node* prev=curr->left;
                while (prev->right)
                {
                    prev=prev->right;
                }
                prev->right=curr->right;
                curr->right=curr->left;
                curr->left=NULL;
            }
            curr=curr->right;
        }
    }
};
int main(){
    BinaryTree t;
    t.buildTreeFromLevelOrder(t.root);
    t.levelOrderTravesal(t.root);
    t.flatten(t.root);
    t.levelOrderTravesal(t.root);
    return 0;
}