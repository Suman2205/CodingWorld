#include<iostream>
#include<vector>
using namespace std;
void countSort(vector<int> &v,int pos){
    int n=v.size();
    // making frequency array
    vector<int>freq(10,0);
    for (int i = 0; i <n; i++)
    {
        freq[(v[i]/pos)%10]++;
    }
    // making cummulative freq array
    for (int i = 1; i <10; i++)
    {
        freq[i]+=freq[i-1];
    }
    // making ans array
    vector<int>ans(n);
    for (int i = n-1; i >=0; i--)
    {
        ans[--freq[(v[i]/pos)%10]]=v[i];
    }
    // copying ans array to given array
    for (int i = 0; i <n; i++)
    {
        v[i]=ans[i];
    }
    return;
}
void radixSort(vector<int>&v){
    int n=v.size();
    // finding max element
    int max_ele=INT32_MIN;
    for (int i = 0; i <n; i++)
    {
        max_ele=max(max_ele,v[i]);
    }
    for (int pos = 1;max_ele/pos>0; pos*=10)
    {
        countSort(v,pos);
    }
    return;
}
int main(){
    int n;
    cout<<"Enter no. of elements:",cin>>n;
    vector<int>v(n);
    for (int i = 0; i<v.size(); i++)
    {
        cout<<"Enter "<<i<<"th index element:",cin>>v[i];
    }
    radixSort(v);
    cout<<"The sorted array is:"<<endl;
    for (int i = 0; i <v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}