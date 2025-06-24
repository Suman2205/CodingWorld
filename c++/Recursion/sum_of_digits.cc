#include<iostream>
using namespace std;
int digitsum(int n){
    if(n<=0)return 0;
    // if(n<=9 and n>=0) return n;
    return (n%10)+digitsum(n/10);
}
int main(){
    int n;
    cout<<"Enter any number: ",cin>>n;
    cout<<"The sum of digits of number "<<n<<" is "<<digitsum(n)<<endl;
    return 0;
}