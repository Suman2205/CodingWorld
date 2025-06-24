#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v={0,1,2,2,3,0,4,2};
    int val;
    cout<<"Enter target value: ";
    cin>>val;
    int ans=0;
    int n=v.size();
    int i=0;
    while(i<v.size()){
        if (v[i]==2)
        {
            v.erase(v.begin()+i);
            ans++;
        }
        else{
            i++;
        }
    }
    cout<<ans<<endl;
    for (int i = 0; i<n-ans; i++)
    {
        cout<<v[i]<<" ";
    }
    
    return 0;
}