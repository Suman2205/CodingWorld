#include<iostream>
using namespace std;
class Father{
private:
    int age;
protected:
    float salary;
public:
    void get(){
        cin>>age>>salary;
    }
    void dis(){
        cout<<"Age: "<<age<<" Salary: "<<salary<<endl;
    }
};
class Child1:protected Father{
    int age1;
public:
    void get1(){
        cin>>age1;
    }
    void dis1(){
        cout<<"Age of Child1: "<<age1<<endl;
        cout<<"Salary of Father: "<<salary<<endl;
    }
};
class Child2:public Child1{
    int age2;
public:
    void get2(){
        get();
        get1();
        cin>>age2;
    }
    void dis2(){
        cout<<"Age of Child2: "<<age2<<endl;
        cout<<"Salary of Father: "<<salary<<endl;
    }
};
int main(){
    Child2 c1;
    // c1.dis1();
    // c1.get1();
    c1.get2();
    c1.dis2();
    return 0;
}