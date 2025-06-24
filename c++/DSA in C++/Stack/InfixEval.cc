#include<iostream>
#include<stack>
#include<string.h>
#include<math.h>
using namespace std;
int calc(int a,char op,int b){
    int res;
    if (op=='+')
    {
        return a+b;
    }
    if (op=='-')
    {
        return a-b;
    }
    if (op=='*')
    {
        return a*b;
    }
    if (op=='/')
    {
        return a/b;
    }
    if (op=='^')
    {
        return pow(a,b);
    }
    
}
int precedence(char op){
    if (op=='^') return 3;
    else if(op=='/'|| op=='*')return 2;
    else if(op=='+'|| op=='-')return 1;
    else return -1;
}
int eval(string& str){
    stack<int>nums;
    stack<char>ops;
    for (int i = 0; i <str.size(); i++)
    {
        if (isdigit(str[i]))
        {
            nums.push(str[i]-'0');
        }
        else if (str[i]=='(')
        {
            ops.push('(');
        }
        else if (str[i]==')')
        {
            while (!ops.empty() && ops.top()!='(' )
            {
                char op=ops.top();
                ops.pop();
                int v2=nums.top();
                nums.pop();
                int v1=nums.top();
                nums.pop();
                nums.push(calc(v1,op,v2));
            }
            if (!ops.empty()){
                ops.pop();
            }
        }
        else{
            while (!ops.empty() && precedence(ops.top())>=precedence(str[i]) )
            {
                char op=ops.top();
                ops.pop();
                int v2=nums.top();
                nums.pop();
                int v1=nums.top();
                nums.pop();
                nums.push(calc(v1,op,v2));
            }
            ops.push(str[i]);
        }
    }
    while (!ops.empty())
    {
        char op=ops.top();
        ops.pop();
        int v2=nums.top();
        nums.pop();
        int v1=nums.top();
        nums.pop();
        nums.push(calc(v1,op,v2));
    }
    return nums.top();
}
int main(){
    string s="1+(2*6-(4/2^2)*5)*6";
    cout<<eval(s)<<endl;
    return 0;
}