#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of elements:",cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter "<<i<<"th index element:",cin>>arr[i];
    }
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        if (i%2==0)
        {
            sum+=arr[i];
        }
        else{
            sum-=arr[i];
        }
    }
    cout<<"The required result is "<<sum;
    return 0;
}