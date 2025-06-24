// program-1(Basic for loop code):
// #include<iostream>
// using namespace std;
// double power(double n, int p=2){
//     double ans=1;
//     for(int i=1;i<=p;i++){
//         ans=ans*n;
//     }
//     return ans;
// }
// int main(){
//     double n;
//     cout<<"Enter base number: ";
//     cin>>n;
//     int p;
//     cout<<"Enter the value to which you have to raised base number: ";
//     cin>>p;
//     cout<<"The value of "<<n<<"^"<<p<<" is "<<power(n,p)<<endl;
//     return 0;
// }

// program-2(a)(Order of execution of constructors and destructors):
// #include<iostream>
// using namespace std;
// class Base1{
// public:
//     Base1(){
//         cout<<"Base1 class Constructor is invoked"<<endl;
//     }
//     ~Base1(){
//         cout<<"Base1 class Destructor is invoked"<<endl;
//     }
// };
// class Base2{
// public:
//     Base2(){
//         cout<<"Base2 clas Constructor is invoked"<<endl;
//     }
//     ~Base2(){
//         cout<<"Base2 class Destructor is invoked"<<endl;
//     }
// };
// class Derived:public Base1,public Base2{
// public:
//     Derived(){
//         cout<<"Derived class Constructor is invoked"<<endl;
//     }
//     ~Derived(){
//         cout<<"Derived class Destructor is invoked"<<endl;
//     }
// };
// int main(){
//     cout<<"The order of execution of constructors: "<<endl;
//     Derived* d=new Derived();
//     cout<<"\nThe order of execution of destructors: "<<endl;
//     delete d;
//     return 0;
// }

// program-2(b)(Base class object pointer was used to access derived class member):
// #include<iostream>
// using namespace std;
// class Student{
// protected:
//     string name;
//     int rollno;
// public:
//     Student(){
//         name="";
//         rollno=0;
//     }
//     void input(){
//         cout<<"Enter student name: ";
//         cin>>name;
//         cout<<"Enter student roll no: ";
//         cin>>rollno;
//     }
//     virtual void display(){
//         cout<<"Student name: "<<name<<endl;
//         cout<<"Student roll no: "<<rollno<<endl;
//     }
// };
// class Marks: public Student{
// public:
//     int marks;
//     Marks(int m):Student(){
//         marks=m;
//     }
//     void display(){
//         cout<<"Student name: "<<name<<endl;
//         cout<<"Student roll no: "<<rollno<<endl;
//         cout<<"Student marks: "<<marks<<endl;
//     }
// };
// int main(){
//     Student* s;
//     Marks m(90);
//     m.input();
//     s=&m;
//     cout<<"Calling display function of Marks class using Student class pointer: "<<endl;
//     s->display();
//     return 0;
// }

// program-3(Calculator):
// #include<iostream>
// using namespace std;
// double calc(double a,char op,double b){
//     switch (op)
//     {
//     case '+':
//         return a+b;
//         break;
//     case '-':
//         return a-b;
//         break;
//     case '*':
//         return a*b;
//         break;
//     case '/':
//         if(b==0){
//             return -1;
//         }
//         else{
//             return a/b;
//         }
//         break;
//     default:
//         cout<<"Invalid Operator"<<endl;
//         break;
//     }
// }
// int main(){
//     while (true)
//     {
//         double x,y;
//         char op;
//         cout<<"Enter first number, operator and second number: ";
//         cin>>x>>op>>y;
//         cout<<"Answer: "<<calc(x,op,y)<<endl;
//         char q;
//         cout<<"Do Another(Y/N): ";
//         cin>>q;
//         if(q=='Y'){
//             continue;
//         }
//         else{
//             break;
//         }
//     }
//     return 0;
// }

// program-4(Use of structure):
// #include<iostream>
// using namespace std;
// struct phone
// {
//     int area;
//     int exchange;
//     int number;
// };
// int main(){
//     phone n1,n2;
//     n1.area=212;
//     n1.exchange=767;
//     n1.number=8900;
//     cout<<"Enter your area code,exchange, and number: ";
//     cin>>n2.area>>n2.exchange>>n2.number;
//     cout<<"My number is ("<<n1.area<<") "<<n1.exchange<<"-"<<n1.number<<endl;
//     cout<<"Your number is ("<<n2.area<<") "<<n2.exchange<<"-"<<n2.number<<endl;
//     return 0;
// }

// program-5(friend function);
// #include<iostream>
// #include<iomanip>
// #include<cmath>
// using namespace std;
// class DB;
// class DM{
//     int metre;
//     int cm;
// public:
//     DM(int a,int b){
//         metre=a;
//         cm=b;
//     }
//     void display(){
//         cout<<metre<<"m "<<cm<<"cm "<<endl;
//     }
//     friend DM addINm(DM&,DB&);
//     friend DB addINft(DM&,DB&);
// };
// class DB{
//     int feet;
//     int inch;
// public:
//     DB(int a,int b){
//         feet=a;
//         inch=b;
//     }
//     void display(){
//         cout<<feet<<"ft "<<inch<<"inch "<<endl;
//     }
//     friend DM addINm(DM&,DB&);
//     friend DB addINft(DM&,DB&);
// };
// DM addINm(DM&t1,DB&t2){
//     int metre;
//     int cm;
//     double cmTom=t1.cm*0.01;
//     double ftTom=t2.feet*0.305;
//     double inchTom=t2.inch*0.0254;
//     double Totalmetre=t1.metre+cmTom+ftTom+inchTom;
//     Totalmetre=ceil(Totalmetre*100)/100;
//     metre=int(Totalmetre);
//     cm=(Totalmetre-metre)*100;
//     return DM(metre,cm);
// }
// DB addINft(DM&t1,DB&t2){
//     int feet;
//     int inch;
//     double mToft=t1.metre*3.281;
//     double cmToft=t1.cm*0.0328;
//     double inchToft=t2.inch*0.084;
//     double Totalfeet=t2.feet+mToft+cmToft+inchToft;
//     Totalfeet=ceil(Totalfeet*100)/100;
//     feet=int(Totalfeet);
//     inch=(Totalfeet-feet)*12;
//     return DB(feet,inch);
// }
// int main(){
//     while(true){
//         int m;
//         int cm;
//         cout<<"Enter distance in metre and cm: ";
//         cin>>m>>cm;
//         int ft;
//         int inch;
//         cout<<"Enter distance in feet and inch: ";
//         cin>>ft>>inch;
//         DM d1(m,cm);
//         DB d2(ft,inch);
//         char q;
//         cout<<"In what dimension your total distance, enter M for in metre and cm, enter F for in ft and inch: ";
//         cin>>q;
//         if(q=='M'){
//             DM res=addINm(d1,d2);
//             cout<<"Result in metre and cm: ";
//             res.display();
//         }
//         else{
//             DB res=addINft(d1,d2);
//             cout<<"Result in feet and inch: ";
//             res.display();
//         }
//         char n;
//         cout<<"Do Another(Y/N): ";
//         cin>>n;
//         if(n=='Y'){
//             continue;
//         }
//         else{
//             break;
//         }
//     }
//     return 0;
// }

// program-6(Operator overloading):
// #include<iostream>
// using namespace std;
// int gcd(int a, int b){
//     for (int i = min(a,b); i>=1; i--)
//     {
//         if(a%i==0&&b%i==0){
//             return i;
//         }
//     }
// }
// class rational{
//     double NUMERATOR;
//     double DENOMINATOR;
// public:
//     rational(){}
//     rational(int n,int m){
//         NUMERATOR=n;
//         DENOMINATOR=m;
//     }
//     void reduce(){
//         int hcf=gcd(NUMERATOR,DENOMINATOR);
//         NUMERATOR=NUMERATOR/hcf;
//         DENOMINATOR=DENOMINATOR/hcf;
//     }
//     rational operator+(rational& r){
//         rational res;
//         res.NUMERATOR=(NUMERATOR*r.DENOMINATOR)+(r.NUMERATOR*DENOMINATOR);
//         res.DENOMINATOR=(DENOMINATOR*r.DENOMINATOR);
//         res.reduce();
//         return res;
//     }
//     friend istream& operator>>(istream&,rational&);
//     friend ostream& operator<<(ostream&,rational&);
// };
// istream& operator>>(istream& din,rational& r){
//     din>>r.NUMERATOR;
//     din>>r.DENOMINATOR;
//     return din;
// }
// ostream& operator<<(ostream& dout,rational& r){
//     dout<<r.NUMERATOR;
//     dout<<"/";
//     dout<<r.DENOMINATOR<<endl;
//     return dout;
// }
// int main(){
//     rational r1;
//     cout<<"Enter numerator and denominator of first rational number: ";
//     cin>>r1;
//     rational r2;
//     cout<<"Enter numerator and denominator of second rational number: ";
//     cin>>r2;
//     r1.reduce();
//     r2.reduce();
//     cout<<"The first rational number in reduced form: ";
//     cout<<r1;
//     cout<<"The second rational number in reduced form: ";
//     cout<<r2;
//     rational r3;
//     r3=r1+r2;
//     cout<<"The addition of first and second rational number: ";
//     cout<<r3;
//     return 0;
// }

// program-7(virtual function):
// #include<iostream>
// using namespace std;
// class father{
// protected:
//     int age;
// public:
//     father(int x){
//         age=x;
//     }
//     virtual void iam(){
//         cout<<"I AM THE FATHER, my age is: "<<age<<endl;
//     }
// };
// class son:public father{
// public:
//     son(int x):father(x){}
//     void iam(){
//         cout<<"I AM THE SON, my age is: "<<age<<endl;
//     }
// };
// class daughter:public father{
// public:
//     daughter(int x):father(x){}
//     void iam(){
//         cout<<"I AM THE DAUGHTER, my age is: "<<age<<endl;
//     }
// };
// int main(){
//     father f(45);
//     son s(20);
//     daughter d(22);
//     cout<<"Calling iam() function for objects of father,son and daughter classes: "<<endl;
//     f.iam();
//     s.iam();
//     d.iam();
//     father* fptr;
//     fptr=&s;
//     cout<<"Calling iam() function for object pointer of father class which pointing object of son class: "<<endl;
//     fptr->iam();
//     fptr=&d;
//     cout<<"Calling iam() function for object pointer of father class which pointing object of daughter class: "<<endl;
//     fptr->iam();
//     return 0;
// }

// program-8(To make a binary file):
// #include<iostream>
// #include<fstream>
// using namespace std;
// class students{
//     int rollno;
//     char name[30];
//     int marks;
// public:
//     void get(){
//         cout<<"Enter your name: ";
//         cin>>name;
//         cout<<"Enter your roll no: ";
//         cin>>rollno;
//         cout<<"Enter your marks: ";
//         cin>>marks;
//         cout<<endl;
//     }
//     void display(){
//         cout<<"Student name: "<<name<<endl;
//         cout<<"Student roll no: "<<rollno<<endl;
//         cout<<"Student marks: "<<marks<<endl;
//         cout<<endl;
//     }
// };
// int main(){
//     int n;
//     cout<<"Enter total no. of students: ";
//     cin>>n;
//     students s[n];
//     ofstream fout;
//     fout.open("student.txt",ios::binary);
//     for(int i=0;i<n;i++){
//         s[i].get();
//         fout.write((char*)&s[i],sizeof(s[i]));
//     }
//     fout.close();
//     ifstream fin;
//     fin.open("student.txt",ios::binary);
//     students c[n];
//     int i=0;
//     while(fin.eof()==0){
//         fin.read((char*)&c[i],sizeof(c[i]));
//         if(fin.eof()!=0){
//             break;
//         }
//         c[i].display();
//     }
//     fin.close();
//     return 0;
// }

// program-9(Array of objects):
// #include<iostream>
// #include<string>
// using namespace std;
// struct date{
//     int day;
//     int month;
//     int year;
// };
// class patient{
// protected:
//     string name[50];
//     date adm;
//     date dis;
//     string disease[50];
// public:
//     void input(){
//         cout<<"Enter patient name: ";
//         cin>>name;
//         cout<<"Enter date of admission(DD MM YYYY): ";
//         cin>>adm.day>>adm.month>>adm.year;
//         cout<<"Enter disease name: ";
//         cin>>disease;
//         cout<<"Enter date of discharge(DD MM YYYY): ";
//         cin>>dis.day>>dis.month>>dis.year;
//     }
//     void display(){
//         cout<<"Patient name: "<<name<<endl;
//         cout<<"Date of admission: "<<adm.day<<"-"<<adm.month<<"-"<<adm.year<<endl;
//         cout<<"Disease: "<<disease<<endl;
//         cout<<"Date of discharge: "<<dis.day<<"-"<<dis.month<<"-"<<dis.year<<endl;
//     }
// };
// class patientAge:public patient{
//     int age;
// public:
//     void set(){
//         input();
//         cout<<"Enter patient age: ";
//         cin>>age;
//     }
//     void ispediatric(){
//         if(age<12){
//             display();
//             cout<<"Patient age: "<<age<<endl;
//         }
//     }
// };
// int main(){
//     int n;
//     cout<<"Enter total no. of patients: ";
//     cin>>n;
//     patientAge p[n];
//     cout<<"Enter details of all patients: "<<endl;
//     for(int i=0;i<n;i++){
//         p[i].set();
//         cout<<endl;
//     }
//     cout<<endl;
//     cout<<"Details of all pediatric patients: "<<endl;
//     for(int i=0;i<n;i++){
//        p[i].ispediatric();
//     }
//     return 0;
// }

// program-10(Multilevel Inheritenance,NOT SO IMP):
// #include<iostream>
// using namespace std;
// class Employee{
// protected:
//     string name;
//     float salary;
// public:
//     Employee(string n,float s){
//         name=n;
//         salary=s;
//     }
//     string toString(){
//         return "Employee Name: "+name+", Salary: "+to_string(salary);
//     }
// };
// class Manager:public Employee{
// protected:
//     string department;
// public:
//     Manager(string n,float s,string d):Employee(n,s){
//         department=d;
//     }
//     string toString(){
//         return "Manager Name: "+ name +", Department: "+department+", Salary: "+to_string(salary);
//     }
// };
// class Executive:public Manager{
// public:
//     Executive(string n,float s,string d):Manager(n,s,d){}
//     string toString(){
//         return "Executive: "+Manager::toString();
//     }
// };
// int main(){
//     Employee emp("Suman",55000);
//     Manager mng("Rohan",80000,"Sales");
//     Executive exe("Sohan",200000,"Finance");
//     cout<<"Employee details: "<<endl;
//     cout<<emp.toString()<<endl;
//     cout<<"Manager details: "<<endl;
//     cout<<mng.toString()<<endl;
//     cout<<"Executive Manager Details: "<<endl;
//     cout<<exe.toString()<<endl; 
//     return 0;
// }

// program-11(NOT SO IMP):
// #include<iostream>
// using namespace std;
// class tollBooth{
//     int noOfCars;
//     double amount;
// public:
//     tollBooth(){
//         noOfCars=0;
//         amount=0;
//     }
//     void payingCar(){
//         noOfCars+=1;
//         amount+=0.50;
//     }
//     void nonpayCar(){
//         noOfCars+=1;
//     }
//     void display(){
//         cout<<"Total no. of cars: "<<noOfCars<<endl;
//         cout<<"Total money collected: "<<amount<<endl;
//     }
// };
// int main(){
//     tollBooth t;
//     cout<<"Enter p to count paying car"<<endl;
//     cout<<"Enter n to count non paying car"<<endl;
//     cout<<"Enter e to print out total cars and total cash and to exit"<<endl;
//     while (true)
//     {
//         char ch;
//         cout<<"Enter your choice: ";
//         cin>>ch;
//         if(ch=='e'){
//             t.display();
//             break;
//         }
//         switch (ch)
//         {
//         case 'p':
//             t.payingCar();
//             cout<<"Paying car recorded"<<endl;
//             break;
//         case 'n':
//             t.nonpayCar();
//             cout<<"Non-Paying car recorded"<<endl;
//             break;
//         default:
//             cout<<"Invalid Choice";
//             break;
//         }
//     }
//     return 0;
// }

// program-12(Reverse a string):
// #include<iostream>
// #include<string>
// using namespace std;
// void reversit(string &s){
//     int i=0;
//     int j=s.size()-1;
//     while(i<j){
//         char ch=s[i];
//         s[i]=s[j];
//         s[j]=ch;
//         i++;
//         j--;
//     }
// }
// int main(){
//     string s;
//     cout<<"Enter the string: "<<endl;
//     getline(cin,s);
//     reversit(s);
//     cout<<"The reverse of entered string: "<<endl;
//     cout<<s<<endl;
//     return 0;
// }

// program-13(Class Template and template overloading):
// #include<iostream>
// using namespace std;
// template<class T1,class T2>
// class Student{
//     T1 name;
//     T2 rollno;
// public:
//     void input(T1 a,T2 b){
//         cout<<"Template class is called"<<endl;
//         name=a;
//         rollno=b;
//     }
//     void show(){
//         cout<<"Name: "<<name<<endl;
//         cout<<"Roll No:"<<rollno<<endl;
//     }
// };
// template<>
// class Student<string,int>{
//     string name;
//     int rollno;
// public:
//     void input(string a,int b){
//         cout<<"Class Template of non-type template argument is called"<<endl;
//         name=a;
//         rollno=b;
//     }
//     void show(){
//         cout<<"Name: "<<name<<endl;
//         cout<<"Roll No: "<<rollno<<endl;
//     }
// };
// int main(){
//     Student<string,float>s1;
//     Student<string,int>s2;
//     s1.input("Suman",77.0);
//     s1.show();
//     s2.input("Suman",77);
//     s2.show();
//     return 0;
// }