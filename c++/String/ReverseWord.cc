#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s="  hello world  ";
    vector<string>rev;
    string temp="";
    for(int i=0;i<s.size();i++){
        if(s[i]==' '&&!temp.empty()){
            rev.push_back(temp);
            temp="";
        }
        else if(s[i]!=' '){
            temp+=s[i];
            continue;
        }
        else{
            continue;
        }
    }
    string t="";
    for(int i=0;i<temp.size();i++){
        if(temp[i]==' '){
            continue;
        }
        else{
            t.push_back(s[i]);
        }
    }
    rev.push_back(t);
    string res="";
    for(int i=rev.size()-1;i>=0;i--){
        if(i==rev.size()-1){
            res+=rev[i];
        }
        else{
            res=res+" "+rev[i];
        }
    }
    cout<<res<<endl;
    return 0;
}
