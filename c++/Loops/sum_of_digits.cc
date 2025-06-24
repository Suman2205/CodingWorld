#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number: ",cin>>n;
    int t=n;
    int sum=0;
    while (t>0)
    {
        int r=t%10;
        t=t/10;
        sum+=r;
    }
    cout<<"The sum of digits of number "<<n<<" is "<<sum;
    return 0;
}