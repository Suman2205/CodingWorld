#include<iostream>
using namespace std;
int pow(int p, int q){
    if (q==0) return 1;
    if (q%2==0){
        int result=pow(p,q/2);
        return result*result;
    }
    else{
        int result=pow(p,(q-1)/2);
        return p*result*result;
    }
}
int main(){
    int p;
    long a=1;
    cout<<a<<endl;
    cout<<"Enter base: ",cin>>p;
    int q;
    cout<<"Enter power: ",cin>>q;
    cout<<"The value of "<<p<<"^"<<q<<" is "<<pow(p,q);
    return 0;
}