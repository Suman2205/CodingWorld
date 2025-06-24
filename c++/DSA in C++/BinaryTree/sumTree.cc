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
    void buildFromLevelOrder(Node* root){
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
            cout<<"Enter data for left node of "<<temp->data<<endl;
            int leftdata;
            cin>>leftdata;
            if (leftdata!=-1)
            {
                temp->left=new Node(leftdata);
                q.push(temp->left);
            }
            cout<<"Enter data for right node of "<<temp->data<<endl;
            int rightdata;
            cin>>rightdata;
            if (rightdata!=-1)
            {
                temp->right=new Node(rightdata);
                q.push(temp->right);
            }
        }
    }
    pair<bool,int> isSumTree(Node* root){
        if (root==NULL)
        {
            pair<bool,int>p=make_pair(true,0);
            return p;
        }
        if (root->left==NULL&&root->right==NULL)
        {
            pair<bool,int>p=make_pair(true,root->data);
            return p;
        }
        pair<bool,int>leftAns=isSumTree(root->left);
        pair<bool,int>rightAns=isSumTree(root->right);
        bool left=leftAns.first;
        bool right=rightAns.first;
        bool cond=root->data==(leftAns.second+rightAns.second);
        pair<bool,int>ans;
        if (left&&right&&cond)
        {
            ans.first=true;
            ans.second=2*root->data;
        }
        else{
            ans.first=false;
        }
        return ans;
    }
    bool SumTree(Node* root){
        return isSumTree(root).first;
    }
};
int main(){
    BinaryTree t;
    t.buildFromLevelOrder(t.root);
    cout<<t.SumTree(t.root)<<endl;
    return 0;
}