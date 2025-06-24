#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number upto which you want to find factorials:",cin>>n;
    int fact=1;
    for (int i = 1; i <=n; i++)
    {
        fact*=i;
        cout<<fact<<endl;
    }
    return 0;
}