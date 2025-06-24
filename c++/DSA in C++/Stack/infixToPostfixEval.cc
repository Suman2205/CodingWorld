#include<iostream>
#include<string>
#include<algorithm>
#include<stack>
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
int main(){
    string Q="2*(5*(3+6))/15-2";
    cout<<infixToPostfix(Q)<<endl;
    return 0;
}