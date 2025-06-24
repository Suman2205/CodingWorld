#include<iostream>
using namespace std;
class Parent{
public:
    Parent(){
        cout<<"Parent is called"<<endl;
    }
};
class Child:public Parent{
public:
    Child(){
        cout<<"Child is called"<<endl;
    }
};
class GrandChild:public Child{
public:
    GrandChild(){
        cout<<"Grandchild is called"<<endl;
    }
};
int main(){
    GrandChild c;
    return 0;
}