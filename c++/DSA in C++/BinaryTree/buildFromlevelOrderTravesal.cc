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
    int leaf;
    BinaryTree(){
        root=NULL;
        leaf=0;
    }
    void BuildtreeFromLevelOrder(Node* &root){
        queue<Node*>q;
        cout<<"Enter the data: ";
        int data;
        cin>>data;
        root=new Node(data);
        q.push(root);
        while (!q.empty())
        {
            Node* temp=q.front();
            q.pop();
            cout<<"Enter left node for "<<temp->data<<endl;
            int leftdata;
            cin>>leftdata;
            if (leftdata!=-1)
            {
                temp->left=new Node(leftdata);
                q.push(temp->left);
            }
            cout<<"Enter right node for "<<temp->data<<endl;
            int rightdata;
            cin>>rightdata;
            if (rightdata!=-1)
            {
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
                if (temp->right)
                {
                    q.push(temp->right);
                }
            }
        }
    }
    int leafCount(Node* root){
        if (root==NULL)
        {
            return 0;
        }
        leafCount(root->left);
        if (root->left==NULL&&root->right==NULL)
        {
            this->leaf++;
        }
        leafCount(root->right);
        return leaf;
    }

};
int main(){
    BinaryTree t;
    t.BuildtreeFromLevelOrder(t.root);
    t.levelOrderTravesal(t.root);
    cout<<"No. of leaf node in given binary tree: "<<t.leafCount(t.root)<<endl;
    return 0;
}
