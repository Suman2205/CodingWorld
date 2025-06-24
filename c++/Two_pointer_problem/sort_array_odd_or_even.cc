#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int>& v){
    int i=0;
    int j=v.size()-1;
    while (i<j)
    {
        if (v[i]%2!=0 && v[j]%2==0)
        {
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
        }
        if (v[i]%2==0)
        {
            i++;
        }
        if(v[j]%2!=0){
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