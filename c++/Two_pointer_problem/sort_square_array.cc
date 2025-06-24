#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sort(vector<int>&v){
    int i=0;
    int j=v.size()-1;
    vector<int>ans;
    while (i<j)
    {
        if (abs(v[i])<abs(v[j]))
        {
            ans.push_back(v[j]*v[j]);
            j--;
        }
        if (abs(v[i])==abs(v[j]))
        {
            ans.push_back(v[i]*v[i]);
            ans.push_back(v[i]*v[i]);
            i++;
            j--;
        }
        else{
            ans.push_back(v[i]*v[i]);
            i++;
        }
    }
    reverse(ans.begin(),ans.end());
    for (int i = 0; i <ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
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
    sort(v);
    return 0;
}