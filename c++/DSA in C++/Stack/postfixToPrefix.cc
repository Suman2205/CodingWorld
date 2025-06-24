#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;
string preToPost(string &pre){
    stack<string>st;
    // reverse(pre.begin(),pre.end());
    for (int i =0; i<pre.size(); i++)
    {
        if (isdigit(pre[i]))
        {
            st.push(to_string(pre[i]-'0'));
        }
        else{
            string v1=st.top();
            st.pop();
            string v2=st.top();
            st.pop();
            string newExp=pre[i]+v2+v1;
            st.push(newExp);
        }
    }
    return st.top();
}
int main(){
    string s="126*422^/5*-6*+";
    cout<<preToPost(s)<<endl;
    return 0;
}
