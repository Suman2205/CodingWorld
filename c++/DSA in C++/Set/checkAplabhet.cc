#include<iostream>
#include<algorithm>
#include<string>
#include<set>
using namespace std;
bool checkAllAlphabet(string s){
    if (s.length()<26) return false;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    set<char>alphabet;
    for(auto ch:s){
        alphabet.insert(ch);
    }
    if (alphabet.size()==26)
    {
        return true;
    }
    return false;
}
int main(){
    string input;
    cout<<"Enter string of alphabets: ";
    cin>>input;
    if (checkAllAlphabet(input))
    {
        cout<<"All english alphabets are present in given string"<<endl;
    }
    else{
        cout<<"All english alphabets are not present in given string"<<endl;
    }
    return 0;
}