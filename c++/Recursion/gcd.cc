#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(b>a) return gcd(b,a);
    if (b==0) return a;
    int result=gcd(b,a%b);
    return result;
}
int main(){
    int x;
    cout<<"Enter x: ",cin>>x;
    int y;
    cout<<"Enter y: ",cin>>y;
    cout<<"The highest common factor of  "<<x<<" & "<<y<<" is "<<gcd(x,y)<<endl;
    return 0;
}