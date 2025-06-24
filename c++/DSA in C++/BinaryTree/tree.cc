#include<iostream>
#include<algorithm>
#include<stack>
#include<string>
#include<queue>
using namespace std;
// struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode() : val(0), left(nullptr), right(nullptr) {}
// };
class TreeNode{
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(){
        val=0;
        left=NULL;
        right=NULL;
    }
    TreeNode(int x){
        val=x;
        left=NULL;
        right=NULL;
    }
};
void Traversal(TreeNode* root){
    if(root==NULL){
        return;
    }
    cout<<root->val;
    cout<<"l";
    Traversal(root->left);
    cout<<"r";
    Traversal(root->right);
}
void levelOrderTravesal(TreeNode* root){
    queue<TreeNode*>q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        TreeNode* temp=q.front();
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
            cout<<temp->val<<" ";
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
void tree(stack<char>& st,TreeNode* &root,int level){
    if(st.empty()){
        return;
    }
    int val=0;
    char c;
    if(root==NULL){
        string s="";
        while (!st.empty()&&st.top()!='-')
            {
                s+=st.top();
                st.pop();
                if(st.empty()){
                    break;
                }
            }
        val=stoi(s);
        cout<<val<<" ";
        TreeNode* new_node=new TreeNode(val);
        root=new_node;
    }
    int count=0;
    while(!st.empty()&&st.top()=='-'){
        st.pop();
        count++;
    }
    if(level+1==count){
        val=0;
        string s="";
        while (!st.empty()&&st.top()!='-')
            {
                s+=st.top();
                st.pop();
                if(st.empty()){
                    break;
                }
            }
        val=stoi(s);
        cout<<val<<" ";
        TreeNode* new_node=new TreeNode(val);
        root->left=new_node;
        cout<<"Node: "<<root->left->val<<" ";
        tree(st,root->left,level+1);
        if(st.empty()){
            return;
        }
        count=0;
        while(st.top()=='-'&&(!st.empty())){
            st.pop();
            count++;
        }

        if(level+1==count){
            val=0;
            string s="";
            while (!st.empty()&&st.top()!='-')
            {
                s+=st.top();
                st.pop();
                if(st.empty()){
                    break;
                }
            }
            val=stoi(s);
            new_node=new TreeNode(val);
            root->right=new_node;
            cout<<"Node: "<<root->right->val<<" ";
            tree(st,root->right,level+1);
        }
        else{
            for(int i=0;i<count;i++){
                st.push('-');
            }
            return;
        }
    }
    else{
        for(int i=0;i<count;i++){
            st.push('-');
        }
        return;
    }
}
int main(){
    string traversal="1-401--349---90--88";
    stack<char>st;
    for(int i=traversal.size()-1;i>=0;i--){
        st.push(traversal[i]);
    }
    TreeNode* root=NULL;
    tree(st,root,0);
    levelOrderTravesal(root);
    Traversal(root);
    return 0;
}