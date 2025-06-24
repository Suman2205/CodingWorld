#include<iostream>
#include<unordered_map>
using namespace std;
bool checkIsomorphic(string &s1,string &s2){
    unordered_map<char,char>m;
    if (s1.size()!=s2.size())
    {
        return false;
    }
    int n=s1.size();
    for (int i = 0; i <n; i++)
    {
        if (m.find(s1[i])!=m.end())
        {
            if (m[s1[i]]!=s2[i])
            {
                return false;
            }
        }
        else{
            m[s1[i]]=s2[i];
        }
    }
    m.clear();
    for (int i = 0; i <n; i++)
    {
        if (m.find(s2[i])!=m.end())
        {
            if (m[s2[i]]!=s1[i])
            {
                return false;
            }
        }
        else{
            m[s2[i]]=s1[i];
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
    cout<<(checkIsomorphic(s1,s2)?"Yes":"No")<<endl;
    return 0;
}
