#include<iostream>
#include<math.h>
#include<string>
#include<algorithm>
using namespace std;
string convert(uint32_t num){
    string ans="";
    uint32_t pow=1;
    while(num>0){
        int r=uint32_t(num%2);
        num=num/2;                               //00000010100101000001111010011100
        ans.push_back((r+'0'));
        pow*=10;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
uint32_t reverseBits(string num) {
    cout<<num.size()<<endl;
    cout<<num<<endl;
    uint32_t ans=0;
    uint32_t pow=1;
    int i=0;
    while(i<num.length()){
        int r=num[i]-'0';
        ans+=(r*pow);
        pow*=2;
        i++;
    }
    return ans;
}
int main(){
    string n=convert(43261596);
    cout<<n<<endl;
    for(int i=n.size();i<32;i++){
        n='0'+n;
    }
    cout<<n<<endl;
    cout<<reverseBits(n);
    return 0;
}