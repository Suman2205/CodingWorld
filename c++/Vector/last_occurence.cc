#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of elements:",cin>>n;
    vector<int>v(n);
    for (int i = 0; i <n; i++)
    {
        cout<<"Enter "<<i<<"th index element:",cin>>v[i];  
    }
    int x;
    cout<<"Enter element of which you want to find occurence in array:",cin>>x;
    for (int i = v.size(); i>=0; i--)
    {
        if (v[i]==x)
        {
            cout<<"The index no. of last occurence of "<<x<<" in array is "<<i;
            break;
        }
    }
    return 0;
    
}