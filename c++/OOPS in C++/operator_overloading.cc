#include<iostream>
using namespace std;
class Complex{
public:
    int real;
    int img;
    Complex(int x, int y){
        real=x;
        img=y;
    }
    Complex operator+ (Complex &c){
        Complex ans(0,0);
        ans.real=real+c.real;
        ans.img=img+c.img;
        return ans;
    }
    void show(Complex &ans){
        cout<<ans.real<<"i"<<" + "<<ans.img<<"j";
    }
};
int main(){
    Complex c1(5,5);
    Complex c2(5,5);
    Complex c3=c1+c2;
    c3.show(c3);
    return 0;

}