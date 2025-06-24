#include<iostream>
#include<map>
using namespace std;
int main(){
    multimap<int,int>m;
    m.insert({1,3});
    m.insert({2,4});
    m.insert({3,5});
    m.insert({4,16});
    m.insert({4,20});
    
    auto itr=m.equal_range(4);
    for (auto i = itr.first; i!=itr.second; i++)
    {
        cout<<i->first<<"=>"<<i->second<<endl;
    }
    return 0;
}