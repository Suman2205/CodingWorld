#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sort(vector<int>& v){
    int i=0;
    int j=v.size()-1;
    while (i<j)
    {
        if (v[i]==1 && v[j]==0)
        {
            v[i]=0;
            v[j]=1;
            i++;
            j--;
        }
        if (v[i]==0)
        {
            i++;
        }
        if(v[j]==1){
            j--;
        }
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
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
