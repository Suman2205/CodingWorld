#include<iostream>
using namespace std;
int fact(int n){
    if(n==1){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    int n;
    cout<<"Enter a number of which you want to find factorial: ",cin>>n;
    cout<<"The factorial of "<<n<<" is "<<fact(n);
    return 0;
}