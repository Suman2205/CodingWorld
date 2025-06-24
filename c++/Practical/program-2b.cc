#include<iostream>
using namespace std;
class student{
protected:
    string name;
    int rollno;
public:
    student(){
        rollno=0;
        name="";
    }
    void input(){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter roll no: ";
        cin>>rollno;
    }
    virtual void display(){
        cout<<"Student Name: "<<name<<endl;
        cout<<"Student roll no: "<<rollno<<endl;
    }
};
class marks:public student{
    int score;
public:
    marks(int x):student(){
        score=x;
    }
    void display(){
        cout<<"Student Name: "<<name<<endl;
        cout<<"Student roll no: "<<rollno<<endl;
        cout<<"Student marks: "<<score<<endl;
    }
};
int main(){
    student* s;
    marks m(85);
    m.input();
    s=&m;
    cout<<"Calling display function of marks class using student class pointer: "<<endl;
    s->display();
    return 0;
}