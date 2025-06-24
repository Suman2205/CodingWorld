#include<iostream>
#include<vector>
#include<string>
using namespace std;
bool isAnagram(string s, string t){
    int n=s.size();
    int m=t.size();
    if (n!=m) return false;
    vector<int>freq(26,0);
    for (int i = 0; i <n; i++)
    {
        freq[int(s[i])-97]++;
        freq[int(t[i])-97]--;
    }
    for (int i = 0; i <26; i++)
    {
        if (freq[i]!=0)
        {
            return false;
        }
    }
    return true;
}
int main(){
    string s;
    cout<<"Enter first string: ",getline(cin,s);
    string t;
    cout<<"Enter second string: ",getline(cin,t);
    if (isAnagram(s,t))
    {
        cout<<"Strings are anagram"<<endl;
    }
    else cout<<"Strings are not anagram"<<endl;
}