#include<iostream>
#include<stack>
using namespace std;
bool isValid(string str){
    stack<char>st;
    for (int i = 0; i <str.size(); i++)
    {
        char ch=str[i];
        if (ch=='('|| ch=='{'||ch=='[')
        {
            st.push(ch);
        }
        else{
            if (ch==')'&&st.top()=='('&&!st.empty())
            {
                st.pop();
            }
            else if (ch==']'&&st.top()=='['&&!st.empty())
            {
                st.pop();
            }
            else if (ch=='}'&&st.top()=='{'&&!st.empty())
            {
                st.pop();
            }
            else return false;
        }
    }
    return st.empty();
}
int main(){
    string str;
    cout<<"Enter string: ";
    cin>>str;
    if(isValid(str)){
        cout<<"Entered string is balanced"<<endl;
    }
    else cout<<"Entered string is not balanced"<<endl;
    return 0;
}