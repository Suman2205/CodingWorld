#include<iostream>
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
};
int main(){
    BinaryTree t;
    t.root=t.BuildTree(t.root);
    t.levelOrderTravesal(t.root);
    return 0;
}