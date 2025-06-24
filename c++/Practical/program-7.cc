#include<iostream>
using namespace std;
class father{
protected:
    int age;
public:
    father(int x){
        age=x;
    }
    virtual void iam(){
        cout<<"I AM THE FATHER, my age is "<<age<<endl;
    }
};
class son: public father{
public:
    son(int x):father(x){}
    void iam(){
        cout<<"I AM THE SON, my age is "<<age<<endl;
    }
};
class daughter: public father{
public:
    daughter(int x):father(x){}
    void iam(){
        cout<<"I AM THE DAUGHTETR, my age is "<<age<<endl;
    }
};
int main(){
    father f(46);
    son s(18);
    daughter d(16);
    cout<<"Calling iam() function for objects of father,son and daughter classes: "<<endl;
    f.iam();
    s.iam();
    d.iam();
    father* ptrTof;
    ptrTof=&s;
    cout<<"Calling iam() function for object of son class using pointer: "<<endl;
    ptrTof->iam();
    ptrTof=&d;
    cout<<"Calling iam() function for object of daughter class using pointer: "<<endl;
    ptrTof->iam();
    return 0;
}