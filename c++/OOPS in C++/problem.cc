#include<iostream>
using namespace std;
class girl;
class customer{
private:
    string name;
    int phone;
public:
    inline customer(string a,int b):name(a),phone(b){
        
    }
    void display(){
        cout<<name<<endl;
        cout<<phone<<endl;
    }
};
int  main(){
    customer c("Suman",77);
    c.display();
    return 0;
}