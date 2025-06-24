#include<iostream>
#include<math.h>
using namespace std;
long long convert(int date){
    long long ans=0;
    long long pow=1;
    while(date>0){
        int r=date%2;
        date=date/2;
        ans=ans+(r*pow);
        pow=pow*10;
    }
    return ans;
}
string convertDateToBinary(string date) {
    string year="";
    for(int i=0;i<4;i++){
        year+=date[i];
    }
    int y=stoi(year);
    string month="";
    for(int i=5;i<7;i++){
        month+=date[i];
    }
    int m=stoi(month);
    string day="";
    for(int i=8;i<10;i++){
        day+=date[i];
    }
    int d=stoi(day);
    long long Year=convert(y);
    long long Month=convert(m);
    long long Day=convert(d);
    string ans=to_string(Year)+"-"+to_string(Month)+"-"+to_string(Day);
    return ans;
}
int main(){
    string date="2020-12-11";
    cout<<convert(43261596)<<endl;
    cout<<convert(54)<<endl;
    cout<<convertDateToBinary(date);
    return 0;
}