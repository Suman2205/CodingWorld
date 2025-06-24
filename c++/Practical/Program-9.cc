#include<iostream>
#include<string>
#include<vector>
using namespace std;
typedef struct date{
    int day;
    int month;
    int year;
}date;
class Record{
    string name;
    date adm_date;
    string disease;
    date dis_date;
    public:
    void get(){
        cout<<"\nEnter Patient name: ";
        cin>>name;
        cout<<"Enter date of admission(DD MM YYYY): ";
        cin>>adm_date.day>>adm_date.month>>adm_date.year;
        cout<<"Enter disease: ";
        cin>>disease;
        cout<<"Enter date of discharge(DD MM YYYY): ";
        cin>>dis_date.day>>dis_date.month>>dis_date.year;
    }
    void show(){
        cout<<"Patient Name: "<<name<<endl;
        cout<<"Admission Date: "<<adm_date.day<<"-"<<adm_date.month<<"-"<<adm_date.year<<endl;
        cout<<"Disease: "<<disease<<endl;
        cout<<"Discharge Date: "<<dis_date.day<<"-"<<dis_date.month<<"-"<<dis_date.year<<"\n";
    }
};
class RecordWithAge:public Record{
    int age;
    public:
    void getAge(){
        get();
        cout<<"Enter Patient age: ";
        cin>>age;
    }
    void pediatricPatient(){
        if (age<12)
        {
            show();
            cout<<"Patient age: "<<age<<endl;
        }
    }
};
int main(){
    int n;
    cout<<"Enter number of patients: ";
    cin>>n;
    RecordWithAge Patient[n];
    for (int i = 0; i <n; i++)
    {
        Patient[i].getAge();
    }
    cout<<"Details of only Pediatric Patients: "<<"\n\n";
    for (int i = 0; i <n; i++)
    {
        Patient[i].pediatricPatient();
    }
    return 0;
}
