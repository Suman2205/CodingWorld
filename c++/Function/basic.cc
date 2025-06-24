#include<iostream>
using namespace std;
int sum(int,int);
int main(){
    int a;
    cout<<"Enter first number:",cin>>a;
    int b;
    cout<<"Enter second number:",cin>>b;
    cout<<"Sum of two given numbers is "<<sum(a,b);
}
int sum(int a,int b){
    return(a+b);
}