#include<iostream>
using namespace std;
class Parent{
public:
    int x=4;
    Parent(){
        cout<<x<<endl;
        cout<<"Parent is called"<<endl;
    }
    void get3(){
        cout<<x<<endl;
    }
private:
    int y=5;
    void get2(){
        cout<<y<<endl;
    }
protected:
    int z=6;
    void get1(){
        cout<<z<<endl;
    }
};
class Child1:public Parent{

};
class Child2:private Parent{

};
class Child3:protected Parent{

};
int main(){
    Child1 c1;
    // c1.get1();
    // c1.get2();
    c1.get3();
    Child2 c2;
    // c2.get1();
    // c2.get2();
    // c2.get3();
    Child3 c3;
    // c3.get3();
    // c3.get1();
    // c3.get2();
    return 0;
} 
