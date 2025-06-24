#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of elements:",cin>>n;
    int arr[n];
    int i=0;
    for (int &ele:arr)
    {
        cout<<"Enter "<<i<<"th "<<"index element:",cin>>ele;
        i++;
    }
    for (int ele:arr)
    {
        cout<<ele<<" ";
    }
    return  0;
}