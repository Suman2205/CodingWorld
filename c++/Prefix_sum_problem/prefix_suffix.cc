#include<iostream>
#include<vector>
using namespace std;
bool checkprefix_suffix(vector<int>& v){
    int totalsum=0;
    for (int i = 0; i <v.size(); i++)
    {
        totalsum+=v[i];
    }
    int prefix_sum=0;
    for (int i = 0; i <v.size(); i++)
    {
        prefix_sum+=v[i];
        int suffix_sum=totalsum-prefix_sum;
        if (prefix_sum==suffix_sum)
        {
            return true;
        }
        
    }
    return false;
}
int main(){
    int n;
    cout<<"Enter no. of elements: ",cin>>n;
    vector<int>v;
    for (int i = 0; i <n; i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    if(checkprefix_suffix(v)==1){
        cout<<"We can partioned the array into subarrays with equal sum.";
    }
    else{
        cout<<"We cannot partioned the array into subarrays with equal sum.";
    }
    return 0;
}