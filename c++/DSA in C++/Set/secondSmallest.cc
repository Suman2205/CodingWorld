#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of elements: ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter elements in vector: "<<endl;
    for (int i = 0; i <n; i++)
    {
        cin>>v[i];
    }
    set<int>num;
    for(auto val:v){
        num.insert(val);
    }
    auto itr=num.begin();
    advance(itr,1);
    cout<<"Second smallest integer: "<<*itr<<endl;
    return 0;
}