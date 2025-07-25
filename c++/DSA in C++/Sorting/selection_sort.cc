#include<iostream>
#include<vector>
using namespace std;
void selectionsort(vector<int>&v){
    int n=v.size();
    for (int i = 0; i < n-1; i++)
    {
        int minidx=i;
        for (int j = i+1; j <n; j++)
        {
            if (v[j]<v[minidx])
            {
                minidx=j;
            }
        }
        if (i!=minidx)
        {
            swap(v[i],v[minidx]);
        }
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
    selectionsort(v);
    cout<<"The sorted array is:"<<endl;
    for (int i = 0; i <v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}