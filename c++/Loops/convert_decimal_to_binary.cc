#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a decimal number:",cin>>n;
    int t= n;
    int bin=0;
    int power=1;
    while (t>0)
    {
        int r=t%2;
        bin+=(r*power);
        power*=10;
        t=t/2;
    }
    cout<<"The "<<n<<" in binary system is "<<bin<<endl;
    return 0;
}