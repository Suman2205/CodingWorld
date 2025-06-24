#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of elements:",cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter "<<i<<"th "<<"index element:",cin>>arr[i];
    }
    int max=arr[0];
    int idx=0;
    for (int i = 0; i < n; i++)
    {
        if (max<arr[i])
        {
            max=arr[i];
            idx=i;
        }
    }
    cout<<"The maximum value element "<<" is "<<max<<" and its index is "<<idx;
    return 0;
}