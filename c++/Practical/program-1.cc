#include<iostream>
using namespace std;
double power(double n,int p=2);
int main(){
    double n,res;
    int p;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Enter power with you have to raised entered number: ";
    cin>>p;
    res=power(n,p);
    cout<<n<<"^"<<p<<" is equal to "<<res<<endl;
    return 0;
}
double power(double n,int p){
    double result=1;
    for (int i = 1; i <=p; i++)
    {
        result*=n;
    }
    return result;
}