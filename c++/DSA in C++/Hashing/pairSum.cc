#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int> pairSum(vector<int>v,int x){
    vector<int>res(2,-1);
    unordered_map<int,int>m;
    for (int i = 0; i <v.size(); i++)
    {
        if (m.find(x-v[i])!=m.end())
        {
            res[0]=m[x-v[i]];
            res[1]=i;
        }
        else{
            m[v[i]]=i;
        }
    }
    return res;
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
    int x;
    cout<<"Enter target element: ";
    cin>>x;
    vector<int>res=pairSum(v,x);
    for(int ele:res){
        cout<<ele<<" ";
    }
    return 0;
}