#include<iostream>
using namespace std;
class Parent{
public:
    Parent(){
        cout<<"Parent is called"<<endl;
    }
};
class Child1:public Parent{
public:
    Child1(){
        cout<<"Child1 is called"<<endl;
    }
};
class Child2:public Parent{
public:
    Child2(){
        cout<<"Child2 is called"<<endl;
    }
};
class GrandChild:public Child1,public Child2{
public:
    GrandChild(){
        cout<<"GrandChild is called"<<endl;
    }
};
int main(){
    GrandChild c;
    return 0;
}