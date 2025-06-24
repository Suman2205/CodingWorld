#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;
string preToPost(string &pre){
    stack<string>st;
    // reverse(pre.begin(),pre.end());
    for (int i =pre.size()-1; i>=0; i--)
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
            string newExp=v1+v2+pre[i];
            st.push(newExp);
        }
    }
    return st.top();
}
int main(){
    string s="*+32-15";
    cout<<preToPost(s)<<endl;
    return 0;
}