#include<iostream>
using namespace std;
class Parent1{
public:
    Parent1(){
        cout<<"Parent1 is called"<<endl;
    }
};
class Parent2{
public:
    Parent2(){
        cout<<"Parent2 is called"<<endl;
    }
};
class Child:public Parent1,public Parent2{
public:
    Child(){
        cout<<"Child is called"<<endl;
    }
};
int main(){
    Child c;
    return 0;
}