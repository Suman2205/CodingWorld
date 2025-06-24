#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any natural number: ";
    cin>>n;
    cout<<n<<" is divisible by(rather than itself)";
    int i=1;
    do
    {
        cout<<","<<i;
        i++;
    } while ((n%i)==0 && n>i);
    return 0;
}