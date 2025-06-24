#include<iostream>
#include<vector>
#include<string>
using namespace std;
void lexicoSorting(vector<string>&v){
    int n=v.size();
    for (int i = 0; i <n; i++)
    {
        int min_idx=i;
        for (int j = i+1; j <n; j++)
        {
            if (v[j]<v[min_idx])
            {
                min_idx=j;
            }
        }
        if (i!=min_idx)
        {
            swap(v[i],v[min_idx]);
        }
    } 
}
int main(){
    int n=6;
    vector<string>v(6);
    v={"papaya","lime","watermelon","mango","apple","kiwi"};
    lexicoSorting(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}