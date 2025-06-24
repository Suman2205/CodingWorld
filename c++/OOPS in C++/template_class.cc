#include<iostream>
using namespace std;
template<class T>
class Test{
    T a;
    T b;
public:
    Test(T x ,T y){
        a=x;
        b=y;
    }
};
int main(){
    Test<int>t1('a',7);

}