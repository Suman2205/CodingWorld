#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter day no.(1-7): ",cin>>n;
    switch (n)
    {
    case 1:
        cout<<"Monday";
        break;
    case 2:
        cout<<"Tuesday";
        break;
    case 3:
        cout<<"Wednesday";
        break;
    case 4:
        cout<<"Thuursday";
        break;
    case 5:
        cout<<"Friday";
        break;
    case 6:
        cout<<"Saturday";
        break;
    case 7:
        cout<<"Sunday";
        break;
    default:
    cout<<"Invalid number";
        break;
    }
    return 0;
}