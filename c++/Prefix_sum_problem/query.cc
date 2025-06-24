#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of elements: ",cin>>n;
    vector<int>v(n+1,0);
    for (int i = 1; i <=n; i++)
    {
        cout<<"Enter "<<i<<"th "<<"index element: ",cin>>v[i];
    }
    //prefix sum array
    for (int i =1; i <=n; i++)
    {
        v[i]+=v[i-1];
    }
    int q;
    cout<<"Enter no. of queries you have: ",cin>>q;
    while (q--)
    {
        int l,r;
        cout<<"l:",cin>>l;
        cout<<"r:",cin>>r;
        int ans;
        ans=v[r]-v[l-1];
        cout<<"Your quered ans: "<<ans<<endl;
    }
    return 0;
}