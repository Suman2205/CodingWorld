#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
#include<stack>
using namespace std;
int precendence(char op){
    if (op=='^')return 3;
    if(op=='*'||op=='/')return 2;
    if(op=='+'||op=='-')return 1;
    else return -1;
}
string infixToPostfix(string& Q){
    Q="("+Q;
    char ch;
    string P;
    stack<char>s;
    for (int i =Q.size(); i >=0; i--)
    {
        ch=Q[i];
        if (ch==')')
        {
           s.push(ch); 
        }
        else if (isdigit(ch))
        {
            P+=ch;
        }
        else if (ch=='(')
        {
            while (!s.empty()&&s.top()!=')')
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
    reverse(P.begin(),P.end());
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
    case '^':
        res=pow(a,b);
        break;
    default:
        cout<<"Invalid Operator";
        break;
    }
    return res;
}
int eval(string& str){
    stack<int>st;
    for (int i = str.size()-1; i>=0; i--)
    {
        char ch=str[i];
        if (isdigit(ch))
        {
            st.push(ch-'0');
        }
        else{
            int v1=st.top();
            st.pop();
            int v2=st.top();
            st.pop();
            st.push(calc(v1,ch,v2));
        }
    }
    return st.top();
}
int main(){
    string Q="1+(2*6-(4/2^2)*5)*6";
    // cin>>Q;
    string P=infixToPostfix(Q);
    cout<<P<<endl;
    for (int i = 0; i <P.size(); i++)
    {
        cout<<P[i];
    }
    cout<<endl;
    cout<<eval(P)<<endl;
    return 0;
}