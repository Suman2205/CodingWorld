#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of elements in array:",cin>>n;
    int arr[n];
    int size=sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i <size; i++)
    {
        cout<<"Enter "<<i<<"th "<<"index element:",cin>>arr[i];
    }
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum+=arr[i];
    }
    cout<<"The sum of all elements in array is "<<sum;
    return 0;
}