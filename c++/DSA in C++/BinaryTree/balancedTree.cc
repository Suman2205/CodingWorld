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
    pair<bool,int> isBalancedFast(Node* root){
        if (root==NULL)
        {
            pair<bool,int>p=make_pair(true,0);
            return p;
        }
        pair<bool,int>left=isBalancedFast(root->left);
        pair<bool,int>right=isBalancedFast(root->right);
        bool leftAns=left.first;
        bool rightAns=right.first;
        bool diff=abs(left.second-right.second)<=1;
        pair<bool,int>ans;
        ans.second=max(left.second,right.second)+1;
        if (leftAns&&rightAns&&diff)
        {
            ans.first=true;
        }
        else{
            ans.first=false;
        }
        return ans;
    }
    bool isBalanced(Node* root){
        return isBalancedFast(root).first;
    }
};
int main(){
    BinaryTree t;
    t.BuildtreeFromLevelOrder(t.root);
    cout<<t.isBalanced(t.root);
    return 0;
}
