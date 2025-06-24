#include<iostream>
using namespace std;
typedef struct phone{
    int area_code;
    int exchange;
    int number;
}phone;
int main(){
    phone n1,n2;
    n1.area_code=459;
    n1.exchange=775;
    n1.number=6534;
    cout<<"Enter your area code,exchange and number: ";
    cin>>n2.area_code>>n2.exchange>>n2.number;
    cout<<"My number is ("<<n1.area_code<<") "<<n1.exchange<<"-"<<n1.number<<endl;
    cout<<"Your number is ("<<n2.area_code<<") "<<n2.exchange<<"-"<<n2.number<<endl;
    return 0;
}