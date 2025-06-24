#include<iostream>
#include<fstream>
using namespace std;
class Student{
    int roll_no,marks;
    char name[30];
public:
    void get(){
        cout<<"Enter your name: ";
        cin>>name;
        cout<<"Enter your roll no. : ";
        cin>>roll_no;
        cout<<"Enter your marks: ";
        cin>>marks;
        cout<<endl;
    }
    void display(){
        cout<<"Student name: "<<name<<endl;
        cout<<"Student roll no: "<<roll_no<<endl;
        cout<<"Marks obtained: "<<marks<<endl;
        cout<<endl;
    }
};
int main(){
    int n;
    cout<<"Enter total no. of students:";
    cin>>n;
    Student s[n];
    ofstream fout;
    fout.open("student.txt",ios::binary);
    for(int i=0;i<n;i++){
        s[i].get();
        fout.write((char*)&s[i],sizeof(s[i]));
    }
    fout.close();
    ifstream fin;
    Student c[n];
    fin.open("student.txt",ios::binary);
    int i=0;
    while(fin.eof()==0){
        fin.read((char*)&c[i],sizeof(c[i]));
        if(fin.eof()!=0){
            break;
        }
        c[i].display();
        i++; 
    }
    fin.close();
    return 0;
}
