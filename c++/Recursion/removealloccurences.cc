#include<iostream>
using namespace std;
string removesubstring(string &s,int idx, int n){
    if (idx==n) return "";
    string curr="";
    curr+=s[idx];
    return ((s[idx]=='a')?"":curr)+removesubstring(s,idx+1,n);
}
int main(){
    int n=5;
    string s="abacx";
    cout<<removesubstring(s,0,n);
    return 0;
}