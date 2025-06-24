#include<iostream>
#include<stack>
using namespace std;
class MinStack{
public:
    stack<int>st;
    int min;
    MinStack(){
        this->min=INT32_MAX;
    }
    void push(int val){
        if (this->st.empty())
        {
            this->st.push(val);
            this->min=val;
        }
        else{
            this->st.push(val-this->min);
            if (val<this->min)
            {
                this->min=val;
            }
        }
    }
    void pop(){
        if(!st.empty()){
            if (this->st.top()>=0)
            {
                this->st.pop();
            }
            else{
                this->min=this->min-this->st.top();
                this->st.top();
            }
        }
    }
    int top(){
        if (this->st.size()==1)
        {
            return this->top();
        }
        else if (this->st.top()<0)
        {
            return this->min;
        }
        else return this->st.top()+this->min;
    }
    int getMin(){
        return min;
    }
};
int main(){
    MinStack s;
    s.st.push(4);
    s.st.push(2);
    s.st.push(6);
    s.st.push(1);
    s.st.push(5);
    cout<<s.st.top()<<endl;
    cout<<s.getMin()<<endl;
    return 0;
}