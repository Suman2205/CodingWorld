#include<iostream>
using namespace std;
int fibo(int n){
    if (n==1||n==0)
    {
        return 1;
    }
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int n;
    // cout<<"Enter no. of terms of fibonacci series you want to print: ",cin>>n;
    n=4;
    cout<<"The fibonacci series is: "<<endl;
    for (int i = 0; i <=n; i++)
    {
        cout<<fibo(i)<<" ";
    }
    cout<<"\n";
    return 0;
}