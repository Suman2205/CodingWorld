#include<iostream>
#include<vector>
using namespace std;
void keypad(string str,int i,string result ,vector<string>&li,vector<string>&v){
    if (i==str.size())
    {
        li.push_back(result);
        return;
    }
    int digit=str[i]-'0';
    if (digit<=1)
    {
        keypad(str,i+1,result,li,v);
    }
    for (int j = 0; j <v[digit].size(); j++)
    {
        keypad(str,i+1,result+v[digit][j],li,v);
    }
    return ;
}
int main(){
    vector<string>alphabet={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    string str="";
    cout<<"Enter digit: ",cin>>str;
    vector<string>res;
    keypad(str,0,"",res,alphabet);
    for (int i = 0; i < res.size(); i++)
    {
        cout<<res[i]<<" ";
    }
    
    return 0;
}