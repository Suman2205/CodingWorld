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
int main(){
    Node* root=NULL;
    cout<<"Enter data for BST: "<<endl;
    takeinput(root);
    levelOrderTravesal(root);
    return 0;
}