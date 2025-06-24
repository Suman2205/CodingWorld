#include<iostream>
using namespace std;
class Parent1{
public:
    Parent1(){
        cout<<"Constructor of Parent1 class is invoked"<<endl;
    }
    ~Parent1(){
        cout<<"Destructor of Parent1 class is invoked"<<endl;
    }
};
class Parent2{
public:
    Parent2(){
        cout<<"Constructor of Parent2 class is invoked"<<endl;
    }
    ~Parent2(){
        cout<<"Destructor of Parent2 class is invoked"<<endl;
    }
};
class Child:public Parent1,public Parent2{
public:
    Child(){
        cout<<"Constructor of Child class is invoked"<<endl;
    }
    ~Child(){             //Destructor automatically invokes after completion of main function
        cout<<"Destructor of Child class is invoked"<<endl;
    }
};
int main(){
    Child c;
    return 0;
}