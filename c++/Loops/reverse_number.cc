#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number: ",cin>>n;
    int t=n;
    int rev=0;
    while (t>0)
    {
        int r=t%10;
        rev=(rev*10)+r;
        t=t/10;
    }
    cout<<"The reverse of a number "<<n<<" is "<<rev;
    return 0;
}