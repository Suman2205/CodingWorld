#include<iostream>
#include<vector>
#include<string>
using namespace std;
string LongestCommonPrefix(vector<string>&str){
    string s1=str[0];
    int ans_length=s1.size();
    for (int i = 0; i <str.size(); i++)
    {
        int j=0;
        while (j<s1.size()&&j<str[i].size()&&s1[j]==str[i][j])
        {
            j++;
        }
        ans_length=j;
    }
    return s1.substr(0,ans_length);
}
int main(){
    int n;
    cout<<"Enter no. of strigs: ",cin>>n;
    vector<string>str(n);
    for (int i = 0; i <n; i++)
    {
        cin>>str[i];
    }
    cout<<"The Longest Common Prefix is "<<LongestCommonPrefix(str)<<endl;
    return 0;
}