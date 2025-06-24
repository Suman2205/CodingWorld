#include<iostream>
using namespace std;
class alpha{
    int x;
    public:
    alpha(int i){
        x=i;
        cout<<"Constructor of alpha class is invoked"<<endl;
    }
    void dis1(){
        cout<<"Alpha x: "<<x<<endl;
    }
};
class beta:public alpha{
    int y;
    public:
    beta(int a,int j):alpha(a){
        y=j;
        cout<<"Constructor of beta class is invoked"<<endl;
    }
    void dis2(){
        cout<<"Beta y: "<<y<<endl;
    }
};
class gamma:public beta{
    int z;
    public:
    gamma(int a,int b,int k):beta(a,b){
        z=k;
        cout<<"Constructor of gamma class is invoked"<<endl;
    }
    void dis(){
        dis1();
        dis2();
        cout<<"Gamma z: "<<z<<endl;
    }
};
int main(){
    gamma g(1,2,3);
    g.dis();
    return 0;
}