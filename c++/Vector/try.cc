#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
void subsets(vector<int>nums,int i,vector<int>res,vector<vector<int>>&li){
    if(i==nums.size()){
        auto it=find(li.begin(),li.end(),res);
        if(it!=li.end()){
            return;
        }
        li.push_back(res);
        return;
    }
    auto it=find(res.begin(),res.end(),nums[i]);
    if(it!=res.end()){
        return;
    }
    res.push_back(nums[i]);
    subsets(nums,i+1,res,li);
    res.pop_back(); 
    subsets(nums,i+1,res,li);
}
int maxSubArray(vector<int>& nums) {
    vector<vector<int>>li;
    vector<int>res;
    subsets(nums,0,res,li);
    int sum=INT32_MIN;
    for(int i=0;i<li.size();i++){
        for(int j=0;j<li[i].size();j++){
            cout<<li[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<li.size();
    for(int i=0;i<li.size();i++){
        int temp=0;
        for(int j=0;j<li[i].size();j++){
            temp+=li[i][j];
        }
        if(temp>sum){
            sum=temp;
        }
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter no. of elements: ";
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<"The maximum sum is "<<maxSubArray(v)<<endl;
    return 0;
}
// -2,1,-3,4,-1,2,1,-5,4