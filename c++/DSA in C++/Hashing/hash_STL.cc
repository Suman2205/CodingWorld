#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main(){
    map<string,int>directory;
    directory["Suman"]=2212;
    directory["Neha"]=1401;
    directory.insert(make_pair("Kisna",1504));
    directory.insert(make_pair("Paras",2101));
    for (auto element: directory)
    {
        cout<<"Name- "<<element.first<<endl;
        cout<<"Birthday- "<<element.second<<endl;
    }
    cout<<endl;
    map<string,int>::iterator itr;
    itr=directory.begin();
    advance(itr,2);
    directory.erase(itr,directory.end());
    for (auto element: directory)
    {
        cout<<"Name- "<<element.first<<endl;
        cout<<"Birthday- "<<element.second<<endl;
    }
    cout<<endl;
    directory.erase("Kisna");
    for (auto element: directory)
    {
        cout<<"Name- "<<element.first<<endl;
        cout<<"Birthday- "<<element.second<<endl;
    }
    return 0;
}