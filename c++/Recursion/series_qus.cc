#include<iostream>
using namespace std;
int series(int n){
    if (n==0) return 0;
    return series(n-1) + ((n%2==0)?(-n):n);
}
int main(){
    int n;
    cout<<"Enter number upto which you want to calculate series: ",cin>>n;
    cout<<"The result of your series is "<<series(n)<<endl;
    return 0;
}