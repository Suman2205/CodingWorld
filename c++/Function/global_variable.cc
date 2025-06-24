#include<iostream>
using namespace std;
int a=5;
int main(){
    int a=7;
    cout<<"The value of local variable is "<<a<<endl;
    cout<<"The value of global variable is "<<::a;
    return 0;
}