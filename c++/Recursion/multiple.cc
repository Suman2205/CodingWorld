#include<iostream>
using namespace std;
void multiple(int n,int k){
    if (k==0)
    {
        return;
    }
    multiple(n,k-1);
    cout<<n*k<<" ";
}
int main(){
    int n;
    cout<<"Enter any number: ",cin>>n;
    int k;
    cout<<"Enter no. of multiples of entered number you want to print: ",cin>>k;
    multiple(n,k);
    return 0;
}