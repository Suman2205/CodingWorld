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
    bool identicalTree(Node* r1,Node* r2){
        if (r1==NULL&&r2==NULL)
        {
            return true;
        }
        if (r1==NULL&&r2!=NULL)
        {
            return false;
        }
        if (r1!=NULL&&r2==NULL)
        {
            return false;
        }
        bool left=identicalTree(r1->left,r2->left);
        bool right=identicalTree(r1->right,r2->right);
        bool value=r1->data==r2->data;
        if (left&&right&&value)
        {
            return true;
        }
        else{
            return false;
        }
        
    }

};
int main(){
    BinaryTree t1,t2;
    t1.BuildtreeFromLevelOrder(t1.root);
    t2.BuildtreeFromLevelOrder(t2.root);
    cout<<t1.identicalTree(t1.root,t2.root);
    return 0;
}
