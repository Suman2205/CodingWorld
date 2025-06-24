#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<int,string>record;
    record[60]="Neha";
    record[77]="Suman";
    record[49]="Kisna";
    record[70]="Paras";
    for(auto element:record){
        cout<<"Roll no- "<<element.first<<" Name- "<<element.second<<endl;
    }
    return 0;
}