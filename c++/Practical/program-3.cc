#include<iostream>
using namespace std;
double calculator(double a,char op,double b);
int main(){
    double a,b,ans;
    char op;
    char qus;
    cout<<"Enter first number,operator and second number: ";
    cin>>a>>op>>b;
    ans=calculator(a,op,b);
    cout<<"Answer: "<<ans<<endl;
    cout<<"Do Another(Y/N)? ";
    cin>>qus;
    if (qus=='Y')
    {
        main();
    }
    return 0;
}
double calculator(double a,char op,double b){
    double res;
    switch (op)
    {
    case '+':
        res=a+b;
        break;
    case '-':
        res=a-b;
        break;
    case '*':
        res=a*b;
        break;
    case '/':
        res=a/b;
        break;
    default:
        cout<<"Invalid Operator";
        break;
    }
    return res;
}