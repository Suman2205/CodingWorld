#include<iostream>
#include<stack>
#include<math.h>
#include<string.h>
using namespace std;
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
    string str="126*422^/5*-6*+";
    cout<<eval(str)<<endl;
    return 0;
}