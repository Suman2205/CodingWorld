#include<iostream>
using namespace std;
template<class T1,class T2>
class Student{
    T1 name;
    T2 roll_no;
public:
    void input(T1 a,T2 b){
        cout<<"template class is called"<<endl;
        name=a;
        roll_no=b;
    }
    void show(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<roll_no<<endl;
    }
};
template<>
class Student<string,int>{
    string name;
    int roll_no;
public:
    void input(string a,int b){
        cout<<"template class of non-type is called"<<endl;
        name=a;
        roll_no=b;
    }
    void show(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<roll_no<<endl;
    }
};
int main(){
    Student<string,int>s1;
    Student<string,float> s2;
    s1.input("ABC",123);
    s1.show();
    s2.input("ABC",123);
    s2.show();
    return 0;
}