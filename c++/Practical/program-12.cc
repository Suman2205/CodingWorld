#include<iostream>
#include<string>
using namespace std;
void reversit(string &s){
    int i=0;
    int j=s.size()-1;
    while(i<j){
        char ch=s[i];
        s[i]=s[j];
        s[j]=ch;
        i++;
        j--;
    }
}
int main(){
    string s;
    cout<<"Enter the string with spaces: "<<endl;
    getline(cin,s);
    reversit(s);
    cout<<"The reverse of given string: "<<endl;
    cout<<s<<endl;
    return 0;
}