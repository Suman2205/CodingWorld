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
int main(){
    Child c1;
    return 0;
}

