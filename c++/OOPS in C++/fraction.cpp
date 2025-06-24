#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(b>a) return gcd(b,a);
    if (b==0) return a;
    int result=gcd(b,a%b);
    return result;
}
class Fraction{
public:
    int num;
    int den;
    Fraction(int num, int den){
        this->num=num;
        this->den=den;
    }
    void display(){
        cout<<this->num<<"/"<<this->den<<endl;
    }
    Fraction operator+(Fraction f){
        int newNum=this->num*f.den + this->den*f.num;
        int newDen=this->den*f.den;
        Fraction ans(newNum,newDen);
        return simply(ans); 
    }
    Fraction operator-(Fraction f){
        int newNum=this->num*f.den - this->den*f.num;
        int newDen=this->den*f.den;
        Fraction ans(newNum,newDen);
        return simply(ans); 
    }
    Fraction operator*(Fraction f){
        int newNum=this->num*f.num;
        int newDen=this->den*f.den;
        Fraction ans(newNum,newDen);
        return simply(ans); 
    }
    Fraction operator/(Fraction f){
        int newNum=this->num*f.den;
        int newDen=this->den*f.num;
        Fraction ans(newNum,newDen);
        return simply(ans); 
    }
    Fraction simply(Fraction f){
        int newNum=f.num/gcd(abs(f.num), abs(f.den));
        int newDen=f.den/gcd(abs(f.num), abs(f.den));
        Fraction ans(newNum, newDen);
        return ans;
    }
};
int main(){
    Fraction* f1=new Fraction(3,4);
    Fraction* f2=new Fraction(5,6);
    Fraction f3=*f1 + *f2;
    Fraction f4=*f1 - *f2;
    Fraction f5=*f1 * *f2;
    Fraction f6=*f1 / *f2;
    cout<<"The addition of fraction number f1 and f2 is ",f3.display();
    cout<<"The subtraction of fraction number f1 and f2 is ",f4.display();
    cout<<"The multiplication of fraction number f1 and f2 is ",f5.display();
    cout<<"The division of fraction number f1 and f2 is ",f6.display();
    return 0;
}