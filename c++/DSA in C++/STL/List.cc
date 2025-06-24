#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>l1={1,2,3,4,5};
    auto itr1=l1.begin();
    cout<<*itr1<<endl;
    for(auto num:l1){
        cout<<num<<" ";
    }
    cout<<endl;
    // travesal in orginal order
    for (auto i = l1.begin(); i !=l1.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    // travesal in reverse order
    for (auto i = l1.rbegin(); i !=l1.rend(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    advance(itr1,2);
    cout<<*itr1<<endl;
    // insertion in list
    l1.insert(itr1,6);
    for(auto num:l1){
        cout<<num<<" ";
    }
    cout<<endl;
    // l1.insert(itr1,2,6);
    // for(auto num:l1){
    //     cout<<num<<" ";
    // }
    // cout<<endl;
    auto l=l1.begin();
    auto r=l1.begin();
    advance(r,2);
    cout<<*itr1<<endl;
    cout<<*r<<endl;
    l1.insert(itr1,l,r);
    for(auto num:l1){
        cout<<num<<" ";
    }
    cout<<endl;
    l1.erase(itr1);
    for(auto num:l1){
        cout<<num<<" ";
    }
    cout<<endl;
    l1.erase(l,r);
    for(auto num:l1){
        cout<<num<<" ";
    }
    cout<<endl;
    l1.push_front(2);
    l1.push_back(3);
    for(auto num:l1){
        cout<<num<<" ";
    }
    cout<<endl;
    l1.pop_back();
    l1.pop_front();
    cout<<l1.front()<<endl;
    for(auto num:l1){
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}