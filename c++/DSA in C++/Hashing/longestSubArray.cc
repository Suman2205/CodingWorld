#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int longestSubArray(vector<int>v){
    vector<int>prefix(v.size());
    // for (int i = 0; i <v.size(); i++)
    // {
    //     prefix[i]+=prefix[i-1]+v[i];
    // }
    unordered_map<int,int>m;
    int prefixsum=0;
    int ans=0;
    for (int i = 0; i <v.size(); i++)
    {
        prefixsum+=v[i];
        if (prefixsum==0)
        {
            ans++;
        }
        
        if (m.find(prefixsum)!=m.end())
        {
            ans=max(ans,i-m[prefixsum]);
        }
        else{
            m[prefixsum]=i;
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter no. of elements: ";
    cin>>n;
    vector<int>v(n);
    for (int i = 0; i <n; i++)
    {
        cin>>v[i];
    }
    cout<<"The size of longest subarray is "<<longestSubArray(v)<<endl;
    return 0;
}