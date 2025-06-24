#include<iostream>
#include<vector>
using namespace std;
void insertionsort(vector<int>&v){
    int n=v.size();
    for (int i = 1; i <n; i++)
    { 
        int current=v[i];
        int j=i-1;
        while (j>=0&&v[j]>current)
        {
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=current;
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
    insertionsort(v);
    cout<<"The sorted array is:"<<endl;
    for (int i = 0; i <v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}