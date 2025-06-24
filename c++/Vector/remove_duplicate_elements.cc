#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>nums={0,0,1,1,1,2,2,3,3,4};
    int k=nums.size();
    int i=0;
    while(i<k-1){
        if(nums[i]==nums[i+1]){
            nums.erase(nums.begin()+i);
            k--;
        }
        else{
            i++;
        } 
    }
    cout<<k<<endl;
    for (int i = 0; i <k; i++)
    {
        cout<<nums[i]<<" ";
    }
    return 0;
}