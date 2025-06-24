#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;
int precedence(char op){
    if (op=='^') return 3;
    else if(op=='/'|| op=='*')return 2;
    else if(op=='+'|| op=='-')return 1;
    else return -1;
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
    case '^':
        res=pow(a,b);
        break;
    default:
        cout<<"Invalid Operator";
        break;
    }
    return res;
}
string infixToPostfix(string &s){
    stack<char>st;
    string res;
    for (int i = 0; i <s.size(); i++)
    {
        char ch=s[i];
        if (isdigit(ch))
        {
            res+=ch;
        }
        else if (ch=='(')
        {
            st.push(ch);
        }
        else if (ch==')')
        {
            while (!st.empty()&&st.top()!='(')
            {
                res+=st.top();
                st.pop();
            }
            if (!st.empty())
            {
                st.pop();
            }
        }
        else{
            while (!st.empty()&&precedence(st.top())>=precedence(ch))
            {
                res+=st.top();
                st.pop();
            }
            st.push(ch);
        }
    }
    while (!st.empty())
    {
        res+=st.top();
        st.pop();
    }
    return res;
}
int eval(string& str){
    stack<int>st;
    for (int i = 0; i <str.size(); i++)
    {
        char ch=str[i];
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
int main(){
    string s="1+(2*6-(4/2^2)*5)*6";
    string P=infixToPostfix(s);
    cout<<P<<endl;
    cout<<eval(P)<<endl;
    return 0;
}