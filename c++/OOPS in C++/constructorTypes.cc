#include<iostream>
using namespace std;
class Rectangle{
    float l;
    float b;
    float area;
    public:
    Rectangle(){
        l=1.0;
        b=1.0;
        area=1.0;
    }
    Rectangle(int p, int q=1){
        l=p;
        b=q;
        area=p*q;
    }
    Rectangle(float m,float n=1.0){
        l=m;
        b=n;
        area=m*n;
    }
    Rectangle(Rectangle& c){
        l=c.l;
        b=c.b;
        area=c.area;
    }
    void dis(){
        cout<<"Length:"<<l<<" Breadth:"<<b<<" Area:"<<area<<endl;
    }
};
int main(){
    Rectangle r1,r2(2),r3(float(4.5)),r4(float(5.5),float(5.5)),r5(r4);
    r1.dis();
    r2.dis();
    r3.dis();
    r4.dis();
    r5.dis();
    return 0;
}