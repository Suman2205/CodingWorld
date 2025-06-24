#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
bool canMakeEqualStrings(vector<string>&v){
    unordered_map<char,int>m;
    for(auto s:v){
        for (int i = 0; i <s.size(); i++)
        {
            m[s[i]]++;
        }
    }
    int n=v.size();
    for (auto ele:m)
    {
        if (ele.second%n!=0)
        {
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter no. of strings: ";
    cin>>n;
    vector<string>v(n);
    cout<<"Enter strings: "<<endl;
    for (int i = 0; i <n; i++)
    {
        cin>>v[i];
    }
    cout<<(canMakeEqualStrings(v)?"Yes":"No")<<endl;
    return 0;
}