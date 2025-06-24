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
int main(){
    Child1 c1;
    Child2 c2;
    return 0;
}