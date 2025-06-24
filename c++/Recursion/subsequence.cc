#include<iostream>
#include<vector>
using namespace std;
void subsequence(string str,int i, string result, vector<string> &li){
    if (i==str.length())
    {
       li.push_back(result);
       return;
    }
    subsequence(str,i+1,result+str[i],li);
    subsequence(str,i+1,result,li);
}
int main(){
    string str="abc";
    vector<string> res;
    subsequence(str,0,"",res);
    for (int i = 0; i < res.size(); i++)
    {
        cout<<res[i]<<" ";
    }
    return 0;
}