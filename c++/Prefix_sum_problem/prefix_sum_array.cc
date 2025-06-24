#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of elements: ",cin>>n;
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        cout<<"Enter "<<i<<"th "<<"index element:",cin>>arr[i];
    }
    for (int i = 1; i <n; i++)
    {   
        arr[i]=arr[i]+arr[i-1];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}