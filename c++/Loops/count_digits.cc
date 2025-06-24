#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number:",cin>>n;
    int count=0;
    while(n>0){
        count++;
        n=n/10;
    }
    cout<<"No. of digits in"<<n<<"is "<<count;
    return 0;
}