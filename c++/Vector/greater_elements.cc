#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of elements:",cin>>n;
    vector<int>v(n);
    for (int i = 0; i<v.size(); i++)
    {
        cout<<"Enter "<<i<<"th index element:",cin>>v[i];
    }
    int x;
    cout<<"Enter element x:",cin>>x;
    int count=0;
    for (int ele:v)
    {
        if (ele>x)
        {
            count++;
        }
    }
    cout<<"No. of elements which are greater than "<<x<<" is "<<count;
    return 0;
}