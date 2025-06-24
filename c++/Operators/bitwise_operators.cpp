#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter first number:",cin>>a;
    int b;
    cout<<"Enter second number:",cin>>b;
    cout<<(a<<5)<<endl;
    cout<<(a>>2)<<endl;
    cout<<(a&b)<<endl;
    cout<<(a|b)<<endl;
    cout<<(~a)<<endl;
    cout<<(a^b)<<endl;
    return 0;
}