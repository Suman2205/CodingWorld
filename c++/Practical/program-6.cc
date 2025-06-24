#include<iostream>
using namespace std;
int gcd(int a,int b){
    int ans;
    for (int i = min(a,b); i>=0; i--)
    {
        if (a%i==0&&b%i==0)
        {
            ans=i;
            break;
        }
    }
    return ans;
}
class rational{
    double NUMINATOR;
    double DENOMINATOR;
public:
    rational(){           //default constructor
    }             
    rational(double x, double y){
        NUMINATOR=x;
        DENOMINATOR=y;
    }
    void reduce(){
        int hcf=gcd(NUMINATOR,DENOMINATOR);
        NUMINATOR=NUMINATOR/hcf;
        DENOMINATOR=DENOMINATOR/hcf;
    }
    rational operator+(rational r){
        rational ans;
        ans.NUMINATOR=(NUMINATOR*r.DENOMINATOR)+(r.NUMINATOR*DENOMINATOR);
        ans.DENOMINATOR=DENOMINATOR*r.DENOMINATOR;
        ans.reduce();
        return ans;
    }
    friend istream& operator >>(istream&, rational&);
    friend ostream& operator <<(ostream&, rational&);
};
istream& operator >>(istream& din,rational& r){
    din>>r.NUMINATOR;
    din>>r.DENOMINATOR;
    return din;
}
ostream& operator <<(ostream& dout,rational& r){
    dout<<r.NUMINATOR<<"/"<<r.DENOMINATOR;
    return dout;
}
int main(){
    rational r1,r3;
    // rational r2(24,36);
    rational r2;
    cout<<"Enter numerator and denominator of rational number: ";
    cin>>r1;
    cout<<"Enter numerator and denominator of another rational number: ";
    cin>>r2;
    r1.reduce();
    r2.reduce();
    cout<<"First rational number in reduced form: "<<r1;
    cout<<endl;
    cout<<"Second rational number in reduced form: "<<r2<<endl;
    r3=r1+r2;
    cout<<"The addition of given first and second rational number is ";
    cout<<r3;
    return 0;
}