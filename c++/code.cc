#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool cond(int n){
    long long temp=n*n;
    string str=to_string(temp);
    cout<<str<<endl;
    int sum=0;
    for(int i=0;i<str.size();i++){
        sum+=str[i]-'0';
    }
    string t=to_string(n);
    int check=0;
    for(int i=0;i<t.size();i++){
        check+=t[i]-'0';
    }
    cout<<check<<endl;
    if(sum%check==0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    cout<<cond(2)<<endl;
    return 0;
}
