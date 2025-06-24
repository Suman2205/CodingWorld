#include<iostream>
#include<string>
#include<vector>
using namespace std;
int LongestOnes(string str,int k){
    int start=0;
    int end=0;
    int zero_count=0;
    int max_length=0;
    for ( ; end <str.length(); end++)
    {
        if (str[end]=='0')
        {
            zero_count++;
        }
        while (zero_count>k)
        {
            if (str[start]=='0')
            {
                start++;
                zero_count--;
            }
        }
        max_length=max(max_length,end-start+1);
    }
    return max_length;
}
int main(){
    string str;
    cout<<"Enter binary string: ",cin>>str;
    int k;
    cout<<"Enter no. of flips: ",cin>>k;
    cout<<"The maximum consecutive 1's in the string after "<<k<<" times flipping is "<<LongestOnes(str,k)<<endl;
    return 0;
}