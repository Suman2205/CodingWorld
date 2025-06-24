#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>set1;
    set1.insert(1);
    set1.insert(2);
    set1.insert(3);
    set1.erase(3);
    set1.insert(4);
    set<int>::iterator itr;
    for (itr =set1.begin(); itr!=set1.end(); itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;
    for(auto val:set1){
        cout<<val<<" ";
    }
    cout<<endl;
    auto st=set1.begin();
    advance(st,2);
    set1.erase(st,set1.end());
    set1.insert(6);
    for(auto val:set1){
        cout<<val<<" ";
    }
    cout<<endl;
    if (set1.find(6)!=set1.end())
    {
        cout<<"value is present at index "<<endl;
    }
    else{
        cout<<"Value is not present"<<endl;
    }
    return 0;
}