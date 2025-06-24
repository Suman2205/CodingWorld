#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int con(string num){
    int ans=0;
    for(int i=0;i<num.size();i++){
        ans=(10*ans)+(num[i]-'0');
    }
    return ans;
}
string decodeString(string s){
    string result="";
    // traversing the encoded string
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]!=']')
        {
            result.push_back(s[i]);
        }
        else{
                // extracting encoded string
                string str="";
            while (!result.empty()&&result.back()!='[')
            {
                str.push_back(result.back());
                result.pop_back();
            }
            // reversing the string
            reverse(str.begin(),str.end());
            // to remove'['from result string
            result.pop_back();     
            // extracting num from result
            string num="";
            while (!result.empty()&&(result.back()>='0'&&result.back()<='9'))
            {
                num.push_back(result.back());
                result.pop_back();
            }
            // reversing num string
            reverse(num.begin(),num.end());
            // converting string into num
            int int_num=con(num);
            while (int_num--)
            {
                result+=str;
            }
        }
    }
    return result;
}
int main(){
    string str;
    cout<<"Enter encoded string: ",cin>>str;
    cout<<"The decoded string is "<<decodeString(str)<<endl;
    return 0;
}