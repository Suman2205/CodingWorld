#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter no. of elements in first vector: ";
    cin>>n;
    cout<<"Enter no. of elements in second vector: ";
    cin>>m;
    vector<int>v1(n);
    vector<int>v2(m);
    cout<<"Enter elements in first vector: "<<endl;
    for (int i = 0; i <n; i++)
    {
        cin>>v1[i];
    }
    cout<<"Enter elements in second vector: "<<endl;
    for (int i = 0; i < m; i++)
    {
        cin>>v2[i];
    }
    set<int>s1;
    int ans_sum=0;
    for (auto ele:v1)
    {
        s1.insert(ele);
    }
    for(auto ele:v2){
        if (s1.find(ele)!=s1.end())
        {
            ans_sum+=ele;
        }
    }
    cout<<"Ans: "<<ans_sum<<endl;
    return 0;
}