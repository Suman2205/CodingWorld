#include<iostream>
#include<string>
#include<algorithm>
#include<stack>
#include<vector>
using namespace std;
int precendence(char op){
    if (op=='^')return 3;
    if(op=='*'||op=='/')return 2;
    if(op=='+'||op=='-')return 1;
    else return -1;
}
string infixToPostfix(string& Q){
    Q+=")";
    char ch;
    string P;
    stack<char>s;
    for (int i = 0; i <Q.size(); i++)
    {
        ch=Q[i];
        if (ch=='(')
        {
           s.push(ch); 
        }
        else if (isdigit(ch))
        {
            P+=ch;
        }
        else if (ch==')')
        {
            while (!s.empty()&&s.top()!='(')
            {
                P+=s.top();
                s.pop();
            }
            s.pop();
        }
        else{
            while (!s.empty()&&precendence(s.top())>=precendence(ch))
            {
                P+=s.top();
                s.pop();
            }
            s.push(ch);
        }
    }
    return P;
}
int calc(int a,char op,int b){
    int res;
    switch (op)
    {
    case '+':
        res=a+b;
        break;
    case '-':
        res=a-b;
        break;
    case '*':
        res=a*b;
        break;
    case '/':
        res=a/b;
        break;
    default:
        cout<<"Invalid Operator";
        break;
    }
    return res;
}
int eval(string& P){
    stack<int>st;
    for (int i = 0; i <P.size(); i++)
    {
        char ch=P[i];
        if (isdigit(ch))
        {
            st.push(ch-'0');
        }
        else{
            int v2=st.top();
            st.pop();
            int v1=st.top();
            st.pop();
            st.push(calc(v1,ch,v2));
        }
    }
    return st.top();
}
using namespace std;
int main(){
    string Q;
    cin>>Q;
    string P=infixToPostfix(Q);
    cout<<P<<endl;
    cout<<eval(P)<<endl;
    return 0;
}