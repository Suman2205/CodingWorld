// CPP program to demonstrate 
// Overloading new and delete operator 
// for a specific class
// #include<iostream>
// #include<cstdlib>
// using namespace std;
// class student{
// 	string name;
// 	int age;
// public:
// 	student(){
// 		cout<< "Constructor is called\n" ; 
// 	}
// 	student(string name, int age){
// 		this->name = name;
// 		this->age = age;
// 	}
// 	void display(){
// 		cout<< "Name:" << name << endl;
// 		cout<< "Age:" << age << endl;
// 	}
// 	void * operator new(size_t size){
// 		cout<< "Overloading new operator with size: " << size << endl;
// 		void * p = malloc(size);
// 		return p;
// 	}
// 	void operator delete(void * p){
// 		cout<< "Overloading delete operator " << endl;
// 		free(p);
// 	}
// };
// int main(){
// 	student * p = new student("Yash", 24);
// 	p->display();
// 	delete p;
// }


// #include<iostream>
// #include<string>
// using namespace std;
// class Vehicle{
//     string Name;
//     string Model;
//     string Company;
//     float Price;
//     string Variants;
// public:
//     void Getdetails(){
//         cout<<"Enter name of the vehicle: ";
//         cin>>Name;
//         cout<<"Enter the model no. of the vehicle: ";
//         cin>>Model;
//         cout<<"Enter the name of the company of vehicle: ";
//         cin>>Company;
//         cout<<"Enter the price of the vehicle: ";
//         cin>>Price;
//         cout<<"Enter the name of the vehicle's variant: ";
//         cin>>Variants;
//     }
//     void Putdetails(){
//         cout<<"vehicle: "<<Name<<endl;
//         cout<<"Model No: "<<Model<<endl;
//         cout<<"Company Name: "<<Company<<endl;
//         cout<<"Price: "<<Price<<endl;
//         cout<<"Variant: "<<Variants<<endl;
//     }
// };
// int main(){
//     Vehicle V;
//     cout<<"Enter all the details of the vehicle: "<<endl;
//     V.Getdetails();
//     cout<<"All Details of the vehicle: "<<endl;
//     V.Putdetails();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// template<class T>
// void bubbleSort(T arr[],int n){
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 T temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
// }
// int main(){
//     int arr[5]={3,4,2,1,8};
//     float brr[5]={1.2,0.8,0.6,1.3,1.1};
//     bubbleSort(arr,5);
//     bubbleSort(brr,5);
//     cout<<"First Sorted array: "<<endl;
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     cout<<"Second sorted array: "<<endl;
//     for(int i=0;i<5;i++){
//         cout<<brr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     float a;
//     cout<<"Enter first number: ";
//     cin>>a;
//     float b;
//     cout<<"Enter second number: ";
//     cin>>b;
//     try{
//         if(b==0){
//             throw a;
//         }
//         else{
//             cout<<"The value of "<<a<<"/"<<b<<"is "<<a/b<<endl;
//         }
//     }
//     catch(float x){
//         cout<<"Divison by zero error occurs and "<<x<<" cannot be divided by zero"<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// #include<fstream>
// using namespace std;
// int main(){
//     ifstream fin("practice.txt");
//     string line;
//     while(getline(fin,line)){
//         cout<<line<<endl;
//     }
//     fin.close();
//     fstream fout("practice.txt");
//     fout<<"Hello Users";
//     cout<<fout.tellg()<<endl;
//     cout<<fout.tellp()<<endl;
//     fout.seekg(0,ios::beg);
//     string line1;
//     while(getline(fout,line1)){
//         cout<<line1<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Customer{
// private:
//     int accountNo;
//     float balance;
// public:
//     string name;
//     int age;
//     void getDetails(){
//         cout<<"Enter Customer Name: ";
//         cin>>name;
//         cout<<"Enter Customer age: ";
//         cin>>age;
//         cout<<"Enter accout no: ";
//         cin>>accountNo;
//         cout<<"Enter Money: ";
//         cin>>balance;
//     }
//     void putDetails(){
//         cout<<"Customer account no: "<<accountNo<<endl;
//         cout<<"Account Balance: "<<balance<<endl;
//     }
// };
// int main(){
//     Customer c;
//     cout<<"Enter all the details of customer: "<<endl;
//     c.getDetails();
//     cout<<"Customer Name: "<<c.name<<endl;
//     cout<<"Customer Age: "<<c.age<<endl;
//     c.putDetails();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// struct date{
//     int day;
//     int month;
//     int year;
// };
// class employee{
//     string name;
//     int age;
//     float salary;
//     date d;
// public:
//     void getDetails(){
//         cout<<"Enter employee name: ";
//         cin>>name;
//         cout<<"Enter employee age: ";
//         cin>>age;
//         cout<<"Enter employee salary: ";
//         cin>>salary;
//         cout<<"Enter date of joining(DD MM YYYY): ";
//         cin>>d.day>>d.month>>d.year;
//         cout<<endl;
//     }
//     void putDetails(){
//         cout<<"Employee Name: "<<name<<endl;
//         cout<<"Employee age: "<<age<<endl;
//         cout<<"Employee salary: "<<salary<<endl;
//         cout<<"Date of Joining: "<<d.day<<"-"<<d.month<<"-"<<d.year<<endl;
//     }
// };
// int main(){
//     int n;
//     cout<<"Enter total no. of employees(At least five employees): ";
//     cin>>n;
//     employee e[n];
//     cout<<"Enter details of all employees: "<<endl;
//     for(int i=0;i<n;i++){
//         e[i].getDetails();
//     }
//     cout<<"Details of all employees: "<<endl;
//     for(int i=0;i<n;i++){
//         e[i].putDetails();
//         cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class TIME{
//     int hours;
//     int minutes;
//     int seconds;
// public:
//     TIME(){
//         hours=0;
//         minutes=0;
//         seconds=0;
//     }
//     TIME(int a,int b,int c){
//         hours=a;
//         minutes=b;
//         seconds=c;
//     }
//     void display(){
//         cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
//     }
//     TIME operator+ (TIME t){
//         TIME res;
//         int totalHr=hours+t.hours;
//         int totalMin=minutes+t.minutes;
//         int totalSec=seconds+t.seconds;
//         if(totalSec>60){
//             totalSec=totalSec-60;
//             totalMin+=1;
//         }
//         if(totalMin>60){
//             totalMin=totalMin-60;
//             totalHr+=1;
//         }
//         res.hours=totalHr;
//         res.minutes=totalMin;
//         res.seconds=totalSec;
//         return res;
//     }
//     bool operator<(TIME t){
//         if(t.hours>hours){
//             return true;
//         }
//         else if(t.minutes>minutes&&t.hours==hours){
//             return true;
//         }
//         else if(t.seconds>seconds&&t.minutes==minutes){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
//     TIME operator-(TIME t){
//         TIME res;
//         int hr=hours-t.hours;
//         int min=minutes-t.minutes;
//         int sec=seconds-t.seconds;
//         if(min<0){
//             min=min+60;
//             hr=hr-1;
//         }
//         if(sec<0){
//             sec=sec+60;
//             min=min-1;
//         }
//         res.hours=hr;
//         res.minutes=min;
//         res.seconds=sec;
//         return res;
//     }
// };
// int main(){
//     cout<<"Enter first timing(hr min sec): ";
//     int hr1;
//     int min1;
//     int sec1;
//     cin>>hr1>>min1>>sec1;
//     TIME t1(hr1,min1,sec1);
//     cout<<"Enter second timing(hr min sec): ";
//     int hr2;
//     int min2;
//     int sec2;
//     cin>>hr2>>min2>>sec2;
//     TIME t2(hr2,min2,sec2);
//     cout<<"First Time: ";
//     t1.display();
//     cout<<endl;
//     cout<<"Second Time: ";
//     t2.display();
//     cout<<endl;
//     cout<<"The addition of two timings: ";
//     TIME t3;
//     t3=t1+t2;
//     t3.display();
//     cout<<endl;
//     TIME t4;
//     if(t1<t2){
//         t4=t2-t1;
//     }
//     else{
//         t4=t1-t2;
//     }
//     cout<<"The subtraction of two timings: ";
//     t4.display();
//     return 0;
// }

// #include<iostream>
// #include<fstream>
// #include<iomanip>
// using namespace std;
// class employee{
//     string name;
//     int id;
//     float salary;
// public:
//     void getDetails(){
//         cout<<"Enter employee name: ";
//         cin>>name;
//         cout<<"Enter employee id: ";
//         cin>>id;
//         cout<<"Enter employee salary: ";
//         cin>>salary;
//         cout<<endl;
//     }
//     void putDetails(){
//         cout<<"Employee Name: "<<name<<endl;
//         cout<<"Employee ID: "<<id<<endl;
//         cout<<"Employee Salary: "<<salary<<endl;
//         cout<<endl;
//     }
// };
// int main(){
//     int n;
//     cout<<"Enter total no. of employees: ";
//     cin>>n;
//     employee e[n];
//     ofstream fout;
//     fout.open("employee.txt",ios::in);
//     for(int i=0;i<n;i++){
//         e[i].getDetails();
//         fout.write((char*)&e[i],sizeof(e[i]));
//     }
//     fout.close();
//     ifstream fin;
//     employee r[n];
//     fin.open("employee.txt",ios::out);
//     for(int i=0;i<n;i++){
//         fin.read((char*)&r[i],sizeof(r[i]));
//         r[i].putDetails();
//     }
//     fin.close();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class complex{
//     float real;
//     float img;
// public:
//     complex(){
//         real=0;
//         img=0;
//     }
//     complex(float a, float b){
//         real=a;
//         img=b;
//     }
//     complex operator+(complex c){
//         complex res;
//         res.real=real+c.real;
//         res.img=img+c.img;
//         return res;
//     }
//     friend istream& operator>>(istream&, complex&);
//     friend ostream& operator<<(ostream&, complex&);
// };
// istream& operator>>(istream& din, complex& c){
//     din>>c.real;
//     din>>c.img;
//     return din;
// }
// ostream& operator<<(ostream& dout, complex& c){
//     dout<<c.real<<" + "<<c.img<<"j"<<endl;
//     return dout;
// }
// int main(){
//     complex c1;
//     complex c2(2.3,5.4);
//     cout<<"Enter real and imaginary value of complex number: ";
//     cin>>c1;
//     complex c3;
//     c3=c1+c2;
//     cout<<"First complex number: ";
//     cout<<c1;
//     cout<<"Second complex number: ";
//     cout<<c2;
//     cout<<"The addition of first and second complex number: ";
//     cout<<c3;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Base{
// public:
//     virtual void input(){
//         cout<<"Member function of Base class is called"<<endl;
//     }
// };
// class Derived:public Base{
// public:
//     void input(){
//         cout<<"Member function of Derived class is called"<<endl;
//     }
// };
// class Child: public Base{
// public:
//     void input(){
//         cout<<"Member function of Child class is called"<<endl;
//     }
// };
// int main(){
//     Base* bptr;
//     Base b;
//     bptr=&b;
//     bptr->input();
//     Derived d;
//     bptr=&d;
//     bptr->input();
//     Child c;
//     bptr=&c;
//     bptr->input();
//     return 0;
// }


