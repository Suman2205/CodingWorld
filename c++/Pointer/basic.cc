#include<iostream>
using namespace std;
int main(){
    int x=10;
    int y=20;
    int *ptrx=&x;
    int *ptry=&y;
    cout<<"The address of x is "<<ptrx<<endl;
    cout<<"The value in that address which is stored by pointer ptrx is "<<*ptrx<<endl;
    cout<<"The address of y is "<<ptry<<endl;
    cout<<"The value in that address which is stored by pointer ptry is "<<*ptry<<endl;
    int result;
    int *ptr_result=&result;
    *ptr_result=*ptrx+*ptry;
    cout<<"The sum of x and y is "<<result<<endl;
    cout<<"The sum of x and y is "<<*ptr_result;
    return 0;
}