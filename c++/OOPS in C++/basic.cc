// #include<iostream>
// using namespace std;
// class Fruit{
// public:
//     string name;
//     string color;
// };
// int main(){
//     Fruit apple;
//     apple.name="Apple";
//     apple.color="Red";
//     cout<<apple.name<<"-"<<apple.color<<endl;
//     Fruit banana;
//     banana.name="Banana";
//     banana.color="Yellow";
//     cout<<banana.name<<"-"<<banana.color<<endl;
//     Fruit *mango=new Fruit();
//     mango->name="Mango";
//     mango->color="Yellow";
//     cout<<mango->name<<"-"<<mango->color<<endl;
//     return 0;
// }
#include<iostream>
using namespace std;
class Student{
    int Sid;
    char name[20];
    public:
    void input(){
        cout<<"Enter your Student ID: ",cin>>Sid;
        cout<<"Enter your name: ",cin>>name;
    }
    void output(){
        cout<<"The Student Id is "<<Sid<<endl;
        cout<<"The Student name is "<<name<<endl;
    }
};
int main(){
    Student s1,s2;
    s1.input();
    s1.output();
    s2.input();
    s2.output();
    return 0;
}