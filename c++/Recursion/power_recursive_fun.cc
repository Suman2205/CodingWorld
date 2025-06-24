#include<iostream>
using namespace std;
int pow(int p, int q){
    if (q==0) return 1;
    return p*pow(p,q-1);
}
int main(){
    int p;
    cout<<"Enter base: ",cin>>p;
    int q;
    cout<<"Enter power: ",cin>>q;
    cout<<"The value of "<<p<<"^"<<q<<" is "<<pow(p,q);
    pow(2,5);
    return 0;
}