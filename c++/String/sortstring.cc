#include<iostream>
#include<string>
#include<vector>
using namespace std;
string sortstring(string str){
    int n=str.size();
    vector<int>freq(26,0);
    // making frequency array
    for (int i = 0; i < n; i++)
    {
        freq[int(str[i])-97]++;
    }
    int j=0;
    for (int i = 0; i <26; i++)
    {
        while (freq[i]--)
        {
            str[j++]=char(i+97);  
        }
    }
    return str;
}
int main(){
    string s;
    getline(cin,s);
    cout<<"The sorted string is :"<<sortstring(s)<<endl;
    return 0;
}