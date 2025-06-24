#include<iostream>
using namespace std;
int main(){
    char op;
    double num1,num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter operand(+,-,*,/): ";
    cin>>op;
    cout<<"Enter second number: ";
    cin>>num2;
    switch (op)
    {
    case '+':
        cout<<"The sum of two entered numbers is "<<num1+num2;
        break;
    case '-':
        cout<<"The subtraction of two entered numbers is "<<num1-num2;
        break;
    case '*':
        cout<<"The multiplication of two entered numbers is "<<num1*num2;
        break;
    case '/':
        cout<<"The division of two entered numbers is "<<num1/num2;
        break;
    default:
        cout<<"You Entered Invalid operand";
        break;
    }
    return 0; 
}