#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int>&v){
    for (int i = 0; i <v.size()-1; i++)
    {
        bool flag=false;
       for (int j = 0; j < v.size()-i-1; j++)
       {
           if (v[j]>v[j+1])
           {
            swap(v[j],v[j+1]);
            flag=true;
           } 
       }
       if(!flag) break;
    }
    return;
}
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of elements:",cin>>n;
    vector<int>v(n);
    for (int i = 0; i<v.size(); i++)
    {
        cout<<"Enter "<<i<<"th index element:",cin>>v[i];
    }
    sort(v);
    cout<<"The sorted array is:"<<endl;
    for (int i = 0; i <v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}