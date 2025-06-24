#include<iostream>
using namespace std;
void getPerms(string s,int idx){
    if(idx==s.size()){
        cout<<s<<" ";
        return;
    }
    for(int i=idx;i<s.size();i++){
        swap(s[idx],s[i]);
        getPerms(s,idx+1);
        swap(s[idx],s[i]);
    }
    return;
}
int main(){
    string s="abc";
    getPerms(s,0);
    return 0;
}