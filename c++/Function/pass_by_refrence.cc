#include<iostream>
using namespace std;
void swap(int &,int &);
int main(){
    int p;
    cout<<"Enter first number p:",cin>>p;
    int q;
    cout<<"Enter second numberq:",cin>>q;
    swap(p,q);
    cout<<"After swapping the value of p:"<<p<<endl;
    cout<<"After swapping the value of q:"<<q;
    return 0;
}
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}