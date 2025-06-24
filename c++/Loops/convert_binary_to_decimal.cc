#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a binary number:",cin>>n;
    int t=n;
    int dec=0;
    int power=1;
    while (n>0)
    {
        int r=n%10;
        dec=dec+(r*power);
        power*=2;
        n=n/10;
    }
    cout<<"The "<< t <<" in decimal system is "<<dec<<endl;
    return 0;
}