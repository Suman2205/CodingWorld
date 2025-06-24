#include<iostream>
using namespace std;
void inc_seq(int n){
    if (n==0)
    {
        return;
    }
    inc_seq(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cout<<"Enter any number: ",cin>>n;
    inc_seq(n);
    return 0;
}