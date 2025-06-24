#include<iostream>
using namespace std;
class test{
    int code;
    static int count;
public:
    void get(){
        cin>>code;
        count++;
    }
    void display(){
        cout<<"Code: "<<code<<endl;
    }
    static void getCount(){
        cout<<"Count: "<<count<<endl;
    }
};
int test:: count;
int main(){
    test t1;
    test t2;
    test t3;
    t1.get();
    t2.get();
    t3.get();
    t1.display();
    t2.display();
    t3.display();
    t3.getCount();
    test:: getCount(); 
    return 0;
}