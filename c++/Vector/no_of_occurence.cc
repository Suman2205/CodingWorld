#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of  elements:",cin>>n;
    vector<int>v(n);
    for (int i = 0; i <v.size(); i++)
    {
        cout<<"Enter "<<i<<"th index element:",cin>>v[i];
    }
    int x;
    cout<<"Enter element of which you want to find no. of occurences: ",cin>>x;
    int occurence=0;
    for (int ele:v)
    {
        if (x==ele)
        {
            occurence++;
        }
    }
    cout<<"No. of occurences of "<<x<<" in a given array is "<<occurence;
    return 0;
}