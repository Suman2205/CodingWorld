#include<iostream>
#include<map>
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
};
Node* createMapping(Node* root,map<Node*,Node*>&nodeToParent,int target){
    Node*res=NULL;
    queue<Node*>q;
    q.push(root);
    nodeToParent[root]=NULL;
    while (!q.empty())
    {
        Node* front=q.front();
        q.pop();
        if (front->data==target)
        {
            res=front;
        }
        
        if (front->left)
        {
            nodeToParent[front->left]=front;
            q.push(front->left);
        }
        if (front->right)
        {
            nodeToParent[front->right]=front;
            q.push(front->right);
        }
    }
    return res;
}
int timeToBurnTree(Node* root,map<Node*,Node*>nodeToParent){
    int ans=0;
    map<Node*,bool>visited;
    queue<Node*>q;
    q.push(root);
    visited[root]=true;
    bool flag=false;
    while (!q.empty())
    {
        int size=q.size();
        for (int i = 0; i <size; i++)
        {
            Node* front=q.front();
            q.pop();
            if (front->left&&!visited[front->left])
            {
                q.push(front->left);
                visited[front->left]=1;
                flag=1;
            }
            if (front->right&&!visited[front->right])
            {
                q.push(front->right);
                visited[front->right]=1;
                flag=1;
            }
            if (nodeToParent[front]&&!visited[nodeToParent[front]])
            {
                q.push(nodeToParent[front]);
                visited[nodeToParent[front]]=1;
                flag=1;
            }
        }
        if (flag==1)
        {
            ans++;
        } 
    }
    return ans;
}
int BurnTree(Node* root,int target){
    map<Node*,Node*>nodeToParent;
    Node* targetNode=createMapping(root,nodeToParent,target);
    int ans=timeToBurnTree(targetNode,nodeToParent);
    return ans;
}
int main(){
    BinaryTree t;
    t.BuildtreeFromLevelOrder(t.root);
    int target;
    cout<<"Enter target node: ";
    cin>>target;
    cout<<"Minimum Time required to burn tree is "<<BurnTree(t.root,target);
    return 0;
}
