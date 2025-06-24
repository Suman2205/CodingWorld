#include<iostream>
#include<string>
using namespace std;
class Employee{
protected:
    string name;
    float salary;
public:
    Employee(string n,float s){
        name=n;
        salary=s;
    }
    virtual string toString(){                   //function overriding
        return "Name: " + name +", Salary: "+to_string(salary);
    }
};
class Manager:public Employee{
protected:
    string department;
public:
    Manager(string n,float s,string d):Employee(n,s){
        department=d;
    }
    virtual string toString(){
        return "Manager Name:"+name+", Department: "+department+", Salary: "+to_string(salary);
    }
};
class Executive:public Manager{
    public:
    Executive(string n,float s,string d):Manager(n,s,d){}
    string toString(){
        return "Executive:"+Manager::toString();
    }
};
int main(){
    Employee emp("Suman",55000);
    Manager mng("Rohan",80000,"Sales");
    Executive exe("Sohan",200000,"Finance");
    cout<<"Employee details: "<<endl;
    cout<<emp.toString()<<endl;
    cout<<"Manager details: "<<endl;
    cout<<mng.toString()<<endl;
    cout<<"Executive Manager Details: "<<endl;
    cout<<exe.Executive::toString()<<endl;         //using class resolution operator function overriding in derived class is handled
    return 0;
}