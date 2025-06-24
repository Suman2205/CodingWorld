#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;
bool checkAnagram(string &s1,string &s2){
    unordered_map<char,int>m;
    for(char c:s1){
        m[c]++;
    }
    for(char c:s2){
        if (m.find(c)==m.end())
        {
            return false;
        }
        else{
            m[c]--;
        }
    }
    for(auto ele:m){
        if (ele.second!=0)
        {
            return false;
        }
        
    }
    return true;
}
int main(){
    string s1;
    cout<<"Enter first string: ";
    cin>>s1;
    string s2;
    cout<<"Enter second string: ";
    cin>>s2;
    cout<<(checkAnagram(s1,s2)?"Yes":"No")<<endl;
    return 0;
}