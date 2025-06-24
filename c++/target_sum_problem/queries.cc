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
    const int N= 1e5 + 10;
    vector<int>freq(N,0);
    for (int i = 0; i <n; i++)
    {
        freq[v[i]]++;
    }
    cout<<"Enter queries:";
    int q;
    cout<<"Enter queries: ",cin>>q;
    while (q--)
    {
        int queryelement;
        cout<<"Enter element for which you have query:",cin>>queryelement;
        cout<<"no. of times your queried element present in array are "<<freq[queryelement]<<endl;
    }
    return 0;
}