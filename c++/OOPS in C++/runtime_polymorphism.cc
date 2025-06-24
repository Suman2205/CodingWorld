#include<iostream>
using namespace std;
class Parent{
public:
    void print(){                          //function overridding
        cout<<"Parent class is called"<<endl;
    }
    void show(){
        cout<<"Parent class is called"<<endl;
    }
};
class Child:public Parent{
public:
    void print(){
        cout<<"Child class is called"<<endl;
    }
    void show(){
        cout<<"Child class is called"<<endl;
    }
};
int main(){
    Parent p;
    Child c;
    p.print();
    p.show();
    c.print();
    c.show();
    return 0;
}