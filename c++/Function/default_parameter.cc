#include<iostream>
using namespace std;
int sum(int a=1,int b=1){
    return(a+b);
}
int main(){
    int a;
    cout<<"Enter first number:",cin>>a;
    int b;
    cout<<"Enter second number:",cin>>b;
    cout<<"Sum of two given numbers is "<<sum(a);
}
