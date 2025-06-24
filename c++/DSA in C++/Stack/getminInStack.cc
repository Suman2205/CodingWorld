#include<iostream>
using namespace std;
class Stack{
    int capacity;
    int* arr;
    int top;
    int min;
    public:
    Stack(int c){
        this->capacity=c;
        arr=new int[c];
        this->top=-1;
        min=INT32_MAX;
    }
    void push(int data){
        if (this->top==this->capacity-1)
        {
            cout<<"Overflow\n";
            return;
        }
        if (this->top==-1)
        {
           this->top++;
           arr[this->top]=data;
           min=data;
           return;
        }
        this->top++;
        arr[this->top]=data-min;
        if (data<min)
        {
            min=data;
        }
    }
    int pop(){
        if (this->top==-1)
        {
            cout<<"Underflow\n";
            return INT16_MIN;
        }
        if (arr[this->top]<0)
        {
            min=min-arr[this->top];
        }
        this->top--;
    }
    bool isEmpty(){
        return this->top==-1;
    }
    bool isFull(){
        return this->top==this->capacity-1;
    }
    int getTop(){
        if (this->top==0)
        {
            return arr[this->top];
        }
        else if (arr[this->top]<0)
        {
            return min;
        }
        else return arr[this->top]+min;
    }
    int size(){
        return this->top+1;
    }
    int getMin(){
        return min;
    }
};
int main(){
    Stack s(5);
    s.push(4);
    cout<<"TOP:"<<s.getTop()<<endl;
    cout<<"MIN:"<<s.getMin()<<endl;
    s.push(2);
    cout<<"TOP:"<<s.getTop()<<endl;
    cout<<"MIN:"<<s.getMin()<<endl;
    s.push(6);
    cout<<"TOP:"<<s.getTop()<<endl;
    cout<<"MIN:"<<s.getMin()<<endl;
    s.push(1);
    cout<<"TOP:"<<s.getTop()<<endl;
    cout<<"MIN:"<<s.getMin()<<endl;
    s.push(0);
    cout<<"TOP:"<<s.getTop()<<endl;
    cout<<"MIN:"<<s.getMin()<<endl;
    s.pop();
    cout<<"TOP:"<<s.getTop()<<endl;
    cout<<"MIN:"<<s.getMin()<<endl;
    s.pop();
    cout<<"TOP:"<<s.getTop()<<endl;
    cout<<"MIN:"<<s.getMin()<<endl;
    s.pop();
    cout<<"TOP:"<<s.getTop()<<endl;
    cout<<"MIN:"<<s.getMin()<<endl;
    s.pop();
    cout<<"TOP:"<<s.getTop()<<endl;
    cout<<"MIN:"<<s.getMin()<<endl;
    return 0;
}