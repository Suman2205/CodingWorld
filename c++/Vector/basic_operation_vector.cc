#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int>v;                                           //vector declaration
    // v.push_back(5);                     //[5]               //add element to end position of vector
    // cout<<"Size:"<<v.size()<<endl;                          //gives size of vector
    // cout<<"Capacity:"<<v.capacity()<<endl;                  //gives capacity of vector
    // v.push_back(2);                     //[5,2]
    // cout<<"Size:"<<v.size()<<endl;
    // cout<<"Capacity:"<<v.capacity()<<endl;      
    // v.push_back(3);                     //[5,2,3]
    // cout<<"Size:"<<v.size()<<endl;          
    // cout<<"Capacity:"<<v.capacity()<<endl;      
    // v.insert(v.begin()+2,8);            //[5,2,8,3]         //insert element at specific position relative to the starting or ending position
    // cout<<"Size:"<<v.size()<<endl;          
    // cout<<"Capacity:"<<v.capacity()<<endl;    
    // v.insert(v.end()-2,9);              //[5,2,9,8,3]
    // cout<<"Size:"<<v.size()<<endl;          
    // cout<<"Capacity:"<<v.capacity()<<endl;    
    // v.pop_back();                       //[5,2,9,8]         //remove element from end position
    // cout<<"Size:"<<v.size()<<endl;          
    // cout<<"Capacity:"<<v.capacity()<<endl;         
    // v.erase(v.begin()+2,v.begin()+3);                //[5,2,8]           //remove element from specific position which is relative to the starting or ending position
    // cout<<"Size:"<<v.size()<<endl;          
    // cout<<"Capacity:"<<v.capacity()<<endl;  
    // for(int ele:v){
    //     cout<<ele<<" ";
    // }
    // cout<<endl;
    // for (int i = 0; i <v.size(); i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    vector<int>Num;
    Num={};
    Num.push_back(1);
    Num.push_back(2);
    for(int i=0;i<Num.size();i++){
        cout<<Num[i]<<" ";
    }
    return 0;
}
