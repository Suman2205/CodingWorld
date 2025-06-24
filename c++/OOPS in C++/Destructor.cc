#include<iostream>
using namespace std;
class Rectangle{
public:
    int l;
    int b;
    Rectangle(int x,int y){
        l=x;
        b=y;
    }
    ~Rectangle(){
        cout<<"Destructor is called"<<endl;
    }
};
int main(){
    Rectangle *r1=new Rectangle(3,4);
    cout<<r1->l<<" "<<r1->b<<endl;
    delete r1;
    Rectangle r2(5,6);
    cout<<r2.l<<" "<<r2.b<<endl;
    return 0;
}