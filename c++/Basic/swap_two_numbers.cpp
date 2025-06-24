#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter first number a:";
    cin>>a;
    int b;
    cout<<"Enter second number b:";
    cin>>b;
    int c;
    c=a;
    a=b;
    b=c;
    cout<<"After swaping the values of a:"<<a<<" and b:"<<b;
    return 0;
}